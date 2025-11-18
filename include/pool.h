#ifndef POOL_H
#define POOL_H

#include <stddef.h>

// 初始化内存池
void pool_init(void);

// 从内存池分配内存 (替代 malloc)
void* pool_alloc(size_t size);

// 将字符串复制到内存池 (替代 strdup)
char* pool_strdup(const char* str);

// 释放所有内存池内存
void pool_free_all(void);

char* pool_strndup(const char* str, size_t len); 

#endif