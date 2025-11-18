# --- 1. 自动检测操作系统与编译器设置 ---
CFLAGS = -g -Wall
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
BISONFLAGS = -d
RE2C = re2c
RE2CFLAGS = -o

SRC_DIR = src
BUILD_DIR = build
INCLUDE_DIR = include

# 测试相关配置
TEST_DIR = tests/big_benchmark/valid
LOG_DIR = log
LOG_FILE = $(LOG_DIR)/test_report.log
FAIL_DIR = tests_failed

# --- 3. 文件定义 ---
C_SOURCES = $(SRC_DIR)/main.c $(SRC_DIR)/ast.c $(SRC_DIR)/pool.c
RE_SOURCE = $(SRC_DIR)/lexer.re
Y_SOURCE = $(SRC_DIR)/parser.y

LEXER_C = $(BUILD_DIR)/lexer.c
PARSER_C = $(BUILD_DIR)/parser.tab.c
PARSER_H = $(BUILD_DIR)/parser.tab.h

OBJECTS = $(BUILD_DIR)/main.o $(BUILD_DIR)/ast.o $(BUILD_DIR)/pool.o $(BUILD_DIR)/lexer.o $(BUILD_DIR)/parser.tab.o

TARGET = $(BUILD_DIR)/js_parser$(TARGET_EXT)

.PHONY: all clean test print_info isolate_failures

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

$(PARSER_C) $(PARSER_H): $(Y_SOURCE) $(INCLUDE_DIR)/ast.h
	@mkdir -p $(@D)
	$(BISON) $(BISONFLAGS) --output=$(PARSER_C) $<

clean:
	rm -rf $(BUILD_DIR) $(LOG_DIR) $(FAIL_DIR)
	@echo "Cleaned build, log, and failure directories."

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
	total=$$(echo "$$files" | wc -l | xargs); \
	current=0; \
	passed=0; \
	failed=0; \
	if [ "$$total" -eq 0 ]; then \
		echo "错误：在 $(TEST_DIR) 中未找到测试文件。"; \
		exit 1; \
	fi; \
	for f in $$files; do \
		current=$$((current + 1)); \
		percent=$$((current * 100 / total)); \
		bar_width=50; \
		filled=$$((percent * bar_width / 100)); \
		empty=$$((bar_width - filled)); \
		bar=""; \
		for i in $$(seq 1 $$filled); do bar="$${bar}#"; done; \
		for i in $$(seq 1 $$empty); do bar="$${bar}-"; done; \
		printf "\r[%s] %3d%% (%d/%d) " "$$bar" "$$percent" "$$current" "$$total"; \
		echo "" >> $(LOG_FILE); \
		echo ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" >> $(LOG_FILE); \
		echo "FILE: $$f" >> $(LOG_FILE); \
		echo "----------------------------------------" >> $(LOG_FILE); \
		./$(TARGET) "$$f" >> $(LOG_FILE) 2>&1; \
		exit_code=$$?; \
		if [ $$exit_code -eq 0 ]; then \
			passed=$$((passed + 1)); \
			echo "RESULT: PASS" >> $(LOG_FILE); \
		else \
			failed=$$((failed + 1)); \
			echo "RESULT: FAIL (Exit Code: $$exit_code)" >> $(LOG_FILE); \
		fi; \
		echo "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" >> $(LOG_FILE); \
	done; \
	echo ""; \
	echo "----------------------------------------"; \
	echo "测试完成 summary:"; \
	echo "  总文件数 : $$total"; \
	echo "  通过     : $$passed"; \
	echo "  失败     : $$failed"; \
	echo "----------------------------------------"; \
	echo "Summary: Passed: $$passed, Failed: $$failed" >> $(LOG_FILE); \
	if [ $$failed -gt 0 ]; then \
		echo "存在失败的测试用例，请查看 $(LOG_FILE) 获取详情。"; \
		echo "您可以运行 'make isolate_failures' 将失败文件移动到独立目录。"; \
		exit 1; \
	else \
		echo "所有测试通过！"; \
	fi

# --- 6. [修复版] 隔离失败的测试用例 ---
# 使用 awk 替代 grep，能够跨越多行错误信息准确提取文件名
isolate_failures:
	@echo ">>> 正在隔离失败的测试文件..."
	@if [ ! -f "$(LOG_FILE)" ]; then \
		echo "错误: 日志文件 $(LOG_FILE) 未找到。"; \
		echo "请先运行 'make test'。"; \
		exit 1; \
	fi
	
	@mkdir -p $(FAIL_DIR)
	@echo "失败的文件将被移动到: ./$(FAIL_DIR)/"
	
	@awk '/^FILE: / { last_file = $$2 } /^RESULT: FAIL/ { if (last_file != "") print last_file }' $(LOG_FILE) | \
	while read -r f; do \
		if [ -f "$$f" ]; then \
			mv "$$f" $(FAIL_DIR)/; \
			echo "  [已移动] $$f"; \
		fi \
	done
	
	@echo ">>> 隔离完成。所有失败的测试文件都在 ./$(FAIL_DIR)/ 目录中。"
	@echo ">>> $(TEST_DIR)/ 目录现在只包含通过测试的文件。"