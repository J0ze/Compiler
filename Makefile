# --- 1. 自动检测操作系统与编译器设置 ---
CFLAGS = -g -Wall
LDFLAGS =

ifeq ($(OS),Windows_NT)
    # Windows 环境 (MinGW / Cygwin)
    PLATFORM := Windows
    CC := gcc
    TARGET_EXT := .exe
else
    # Unix-like 环境
    UNAME_S := $(shell uname -s)
    ifeq ($(UNAME_S),Linux)
        PLATFORM := Linux
        CC := gcc
        TARGET_EXT :=
        # LDFLAGS += -lm # (如果需要数学库，取消注释)
    endif
    ifeq ($(UNAME_S),Darwin)
        PLATFORM := macOS
        CC := clang
        TARGET_EXT :=
    endif
endif

# --- 2. 目录与工具定义 ---
BISON = bison
BISONFLAGS = -d# -d 生成.tab.h, -v 生成详细报告
RE2C = re2c
RE2CFLAGS = -o

SRC_DIR = src
BUILD_DIR = build
INCLUDE_DIR = include

# --- 3. 文件定义 ---
# 源文件 (已包含 pool.c)
C_SOURCES = $(SRC_DIR)/main.c $(SRC_DIR)/ast.c $(SRC_DIR)/pool.c
RE_SOURCE = $(SRC_DIR)/lexer.re
Y_SOURCE = $(SRC_DIR)/parser.y

# 生成的文件
LEXER_C = $(BUILD_DIR)/lexer.c
PARSER_C = $(BUILD_DIR)/parser.tab.c
PARSER_H = $(BUILD_DIR)/parser.tab.h

# 目标文件 (已包含 pool.o)
OBJECTS = $(BUILD_DIR)/main.o $(BUILD_DIR)/ast.o $(BUILD_DIR)/pool.o $(BUILD_DIR)/lexer.o $(BUILD_DIR)/parser.tab.o

# 最终可执行文件 (自动添加 .exe 后缀，如果在 Windows 上)
TARGET = $(BUILD_DIR)/js_parser$(TARGET_EXT)

.PHONY: all clean test

# --- 4. 构建规则 ---

all: print_info $(TARGET)

# 打印当前环境信息
print_info:
	@echo "Building for platform: $(PLATFORM) using $(CC)"

# 链接
$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $^ -o $@

# 编译 C 源文件 (通用规则)
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -I$(BUILD_DIR) -c $< -o $@

# (特定规则) main.o 依赖 parser.tab.h
$(BUILD_DIR)/main.o: $(SRC_DIR)/main.c $(PARSER_H)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -I$(BUILD_DIR) -c $(SRC_DIR)/main.c -o $@

# (特定规则) ast.o 依赖 parser.tab.h
$(BUILD_DIR)/ast.o: $(SRC_DIR)/ast.c $(PARSER_H)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -I$(BUILD_DIR) -c $(SRC_DIR)/ast.c -o $@

# (特定规则) pool.o (来自您的版本)
$(BUILD_DIR)/pool.o: $(SRC_DIR)/pool.c $(INCLUDE_DIR)/pool.h
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -I$(BUILD_DIR) -c $< -o $@

# 编译生成的词法分析器 C 文件
$(BUILD_DIR)/lexer.o: $(LEXER_C) $(PARSER_H)
	$(CC) $(CFLAGS) -Wno-self-assign -I$(INCLUDE_DIR) -I$(BUILD_DIR) -c $< -o $@

# 编译生成的语法分析器 C 文件
$(BUILD_DIR)/parser.tab.o: $(PARSER_C)
	$(CC) $(CFLAGS) -Wno-unused-but-set-variable -I$(INCLUDE_DIR) -I$(BUILD_DIR) -c $< -o $@

# 从 .re 生成 .c
$(LEXER_C): $(RE_SOURCE)
	@mkdir -p $(@D)
	$(RE2C) -W -T $(RE2CFLAGS) $@ $<

# 从 .y 生成 .c 和 .h
$(PARSER_C) $(PARSER_H): $(Y_SOURCE) $(INCLUDE_DIR)/ast.h
	@mkdir -p $(@D)
	$(BISON) $(BISONFLAGS) --output=$(PARSER_C) $<

clean:
	rm -rf $(BUILD_DIR)

test: all
	# 测试脚本将在这里被调用
	@echo "Running tests/valid/test.js..."
	./$(TARGET) tests/valid/test.js
	@echo "Running tests/valid/asi_test.js..."
	./$(TARGET) tests/valid/asi_test.js