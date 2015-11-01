#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

char * stpcpy(char *dst, char const *src) {
    size_t src_len = strlen(src);
    return memcpy(dst, src, src_len) + src_len;
}
