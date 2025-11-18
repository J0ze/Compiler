# --- 1. 自动检测操作系统与编译器设置 ---
CFLAGS = -g -Wall -Wno-unused-function
LDFLAGS =

ifeq ($(OS),Windows_NT)
	PLATFORM := Windows
	CC := gcc
	TARGET_EXT := .exe
else
	UNAME_S := $(shell uname -s)
	ifeq ($(UNAME_S),Linux)
		PLATFORM := Linux
		CC := gcc
		TARGET_EXT :=
	endif
	ifeq ($(UNAME_S),Darwin)
		PLATFORM := macOS
		CC := clang
		TARGET_EXT :=
	endif
endif

# --- 2. 目录与工具定义 ---
BISON = bison
# macOS自带的bison版本较老，不支持 -Wno-all 参数，恢复为默认
BISONFLAGS = -d
RE2C = re2c
RE2CFLAGS = -o

SRC_DIR = src
BUILD_DIR = build
INCLUDE_DIR = include

# 测试相关配置
TEST_DIR = tests
LOG_DIR = log
LOG_FILE = $(LOG_DIR)/test_report.log

# --- 3. 文件定义 ---
C_SOURCES = $(SRC_DIR)/main.c $(SRC_DIR)/ast.c $(SRC_DIR)/pool.c
RE_SOURCE = $(SRC_DIR)/lexer.re
Y_SOURCE = $(SRC_DIR)/parser.y

LEXER_C = $(BUILD_DIR)/lexer.c
PARSER_C = $(BUILD_DIR)/parser.tab.c
PARSER_H = $(BUILD_DIR)/parser.tab.h

OBJECTS = $(BUILD_DIR)/main.o $(BUILD_DIR)/ast.o $(BUILD_DIR)/pool.o $(BUILD_DIR)/lexer.o $(BUILD_DIR)/parser.tab.o

TARGET = $(BUILD_DIR)/js_parser$(TARGET_EXT)

.PHONY: all clean test print_info

# --- 4. 构建规则 ---

all: print_info $(TARGET)

print_info:
	@echo "Building for platform: $(PLATFORM) using $(CC)"

$(TARGET): $(OBJECTS)
	@mkdir -p $(@D)
	$(CC) $(LDFLAGS) $^ -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -I$(BUILD_DIR) -c $< -o $@

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.c $(PARSER_H)
$(BUILD_DIR)/ast.o: $(SRC_DIR)/ast.c $(PARSER_H)
$(BUILD_DIR)/pool.o: $(SRC_DIR)/pool.c $(INCLUDE_DIR)/pool.h

$(BUILD_DIR)/lexer.o: $(LEXER_C) $(PARSER_H)
	$(CC) $(CFLAGS) -Wno-self-assign -I$(INCLUDE_DIR) -I$(BUILD_DIR) -c $< -o $@

$(LEXER_C): $(RE_SOURCE)
	@mkdir -p $(@D)
	$(RE2C) -W -T $(RE2CFLAGS) $@ $<

$(BUILD_DIR)/parser.tab.o: $(PARSER_C)
	$(CC) $(CFLAGS) -Wno-unused-but-set-variable -I$(INCLUDE_DIR) -I$(BUILD_DIR) -c $< -o $@

# 修改点：使用静默模式运行 bison，只在出错时才显示输出
$(PARSER_C) $(PARSER_H): $(Y_SOURCE) $(INCLUDE_DIR)/ast.h
	@mkdir -p $(@D)
	@if ! $(BISON) $(BISONFLAGS) --output=$(PARSER_C) $< >/dev/null 2>&1; then \
		echo "Bison 编译失败，显示错误信息："; \
		$(BISON) $(BISONFLAGS) --output=$(PARSER_C) $<; \
		exit 1; \
	fi

clean:
	rm -rf $(BUILD_DIR) $(LOG_DIR)
	@echo "Cleaned build and log directories."

# --- 5. 测试规则 ---
test: $(TARGET)
	@mkdir -p $(LOG_DIR)
	@if [ ! -d "$(TEST_DIR)" ]; then \
		echo "错误: 测试目录 '$(TEST_DIR)' 不存在。"; \
		exit 1; \
	fi
	@echo "=== JavaScript Parser Test Report ===" > $(LOG_FILE)
	@echo "Date: $$(date)" >> $(LOG_FILE)
	@echo "Test Root: $(TEST_DIR)" >> $(LOG_FILE)
	@echo "-------------------------------------" >> $(LOG_FILE)
	@echo "开始运行测试..."
	@echo "日志将输出到: $(LOG_FILE)"
	@files=$$(find $(TEST_DIR) -type f); \
	failed=0; \
	if [ -z "$$files" ]; then \
		echo "错误：在 $(TEST_DIR) 中未找到测试文件。"; \
		exit 1; \
	fi; \
	for f in $$files; do \
		echo "正在处理: $$(basename "$$f")"; \
		echo "" >> $(LOG_FILE); \
		echo ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" >> $(LOG_FILE); \
		echo "FILE: $$(basename "$$f")" >> $(LOG_FILE); \
		echo "----------------------------------------" >> $(LOG_FILE); \
		./$(TARGET) "$$f" >> $(LOG_FILE) 2>&1; \
		exit_code=$$?; \
		if [ $$exit_code -eq 0 ]; then \
			echo "RESULT: PASS" >> $(LOG_FILE); \
		else \
			failed=$$((failed + 1)); \
			echo "RESULT: FAIL (Exit Code: $$exit_code)" >> $(LOG_FILE); \
		fi; \
		echo "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" >> $(LOG_FILE); \
	done; \
	echo "----------------------------------------"; \
	if [ $$failed -gt 0 ]; then \
		echo "测试结束: 发现 $$failed 个失败用例。详情请查看 $(LOG_FILE)。"; \
		exit 1; \
	else \
		echo "测试结束: 所有测试用例通过！"; \
	fi