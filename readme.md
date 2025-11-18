# C JavaScript Parser

## 编译指南

本项目支持 Linux, macOS 和 Windows (WSL 或 MinGW)。

### 前置依赖

在编译之前，请确保已安装以下工具：

- `gcc` (C 编译器)
- `bison` (语法分析器生成器)
- `re2c` (词法分析器生成器)
- `make` (构建工具)

### 编译步骤

1. **克隆或解压项目**:

   ```
   cd js_parser
   ```

2. **编译**:

   ```
   make
   ```

   编译成功后，根目录下会生成可执行文件 `js_parser` (Windows 下为 `js_parser.exe`)。

3. **清理构建文件** (可选):

   ```
   make clean
   ```

## 使用指南

### 批量测试

```
make test DIR=path/to/test_files
```

- **DIR**: 包含测试用例的文件夹路径。
- **输出**: 测试结果摘要将显示在终端，志将保存在 `logs/test_summary.log` 中。

## 目录结构

- `src/`: 源代码 (`.c`, `.y`, `.re`)
- `include/`: 头文件 (`.h`)
- `build/`: 编译生成的中间文件 (`lexer.c`, `parser.tab.c` 等)
- `logs/`: 测试日志输出目录

## 小结

一个简易的基于ES6语法的js语法解析器，包含了最基本的es6语法规则解析（部分过于深入的内容因个人能力有限实在无法实现）

对于规范的JS文件能生成符合EStree规范的语法树，但是对于测试数据集中非规则的JS语法格式------没有换行符等，会出现不可预料的错误，实在无法修理了😭,作为课程大作业真的尽力了