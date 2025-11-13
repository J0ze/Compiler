# Makefile

CC = gcc
CFLAGS = -g -Wall
LDFLAGS =

# 工具定义
BISON = bison
BISONFLAGS = -d# -d 生成.tab.h, -v 生成详细报告
RE2C = re2c
RE2CFLAGS = -o

# 目录定义
SRC_DIR = src
BUILD_DIR = build
INCLUDE_DIR = include

# 源文件
C_SOURCES = $(SRC_DIR)/main.c $(SRC_DIR)/ast.c
RE_SOURCE = $(SRC_DIR)/lexer.re
Y_SOURCE = $(SRC_DIR)/parser.y

# 生成的文件
LEXER_C = $(BUILD_DIR)/lexer.c
PARSER_C = $(BUILD_DIR)/parser.tab.c
PARSER_H = $(BUILD_DIR)/parser.tab.h

# 目标文件
OBJECTS = $(BUILD_DIR)/main.o $(BUILD_DIR)/ast.o $(BUILD_DIR)/lexer.o $(BUILD_DIR)/parser.tab.o
TARGET = $(BUILD_DIR)/js_parser

.PHONY: all clean test

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $^ -o $@

# 编译 C 源文件
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -I$(BUILD_DIR) -c $< -o $@

# (新规则) main.o 的特定规则
# 它也需要 parser.tab.h，所以我们添加 $(PARSER_H) 作为依赖
$(BUILD_DIR)/main.o: $(SRC_DIR)/main.c $(PARSER_H)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -I$(BUILD_DIR) -c $(SRC_DIR)/main.c -o $@

# (新规则) ast.o 的特定规则
# 它需要 parser.tab.h，所以我们添加 $(PARSER_H) 作为依赖
$(BUILD_DIR)/ast.o: $(SRC_DIR)/ast.c $(PARSER_H)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -I$(BUILD_DIR) -c $(SRC_DIR)/ast.c -o $@

# 编译生成的词法分析器 C 文件
$(BUILD_DIR)/lexer.o: $(LEXER_C) $(PARSER_H)
	$(CC) $(CFLAGS) -Wno-self-assign -I$(INCLUDE_DIR) -I$(BUILD_DIR) -c $< -o $@

# 编译生成的语法分析器 C 文件
$(BUILD_DIR)/parser.tab.o: $(PARSER_C)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -I$(BUILD_DIR) -c $< -o $@

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
	@echo "Running tests..."
	# ./scripts/run_tests.sh