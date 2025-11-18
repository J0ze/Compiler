#include "pool.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>

// 默认块大小：4MB
// 对于 200MB 的源文件，AST 可能达到 1GB+，大块分配能减少系统调用
#define BLOCK_SIZE (1024 * 1024 * 4)

typedef struct PoolBlock {
    struct PoolBlock *next;
    char *data;
    size_t size;
    size_t used;
} PoolBlock;

static PoolBlock *head = NULL;

void pool_init(void) {
    head = NULL;
}

static PoolBlock* create_block(size_t size) {
    PoolBlock *b = (PoolBlock*)malloc(sizeof(PoolBlock));
    if (!b) { fprintf(stderr, "[Fatal] Pool header OOM\n"); exit(1); }
    
    b->data = (char*)malloc(size);
    if (!b->data) { fprintf(stderr, "[Fatal] Pool data OOM\n"); exit(1); }
    
    b->size = size;
    b->used = 0;
    b->next = head;
    head = b;
    return b;
}

void* pool_alloc(size_t size) {
    // 8字节对齐，保证不同CPU架构下的访问效率
    size = (size + 7) & ~7;

    // 如果没有块，或者当前块空间不足
    if (!head || head->used + size > head->size) {
        // 如果请求的尺寸大于默认块大小，则单独分配足够大的块
        size_t alloc_size = (size > BLOCK_SIZE) ? size : BLOCK_SIZE;
        create_block(alloc_size);
    }

    void *ptr = head->data + head->used;
    head->used += size;
    return ptr;
}

char* pool_strdup(const char* str) {
    if (!str) return NULL;
    size_t len = strlen(str) + 1;
    char *new_str = (char*)pool_alloc(len);
    memcpy(new_str, str, len);
    return new_str;
}

char* pool_strndup(const char* str, size_t len) {
    char *new_str = (char*)pool_alloc(len + 1);
    if (new_str == NULL) {
        // 内存分配失败
        return NULL;
    }
    memcpy(new_str, str, len);
    new_str[len] = '\0'; // 确保字符串以 null 结尾
    return new_str;
}

void pool_free_all(void) {
    PoolBlock *curr = head;
    while (curr) {
        PoolBlock *next = curr->next;
        free(curr->data);
        free(curr);
        curr = next;
    }
    head = NULL;
}