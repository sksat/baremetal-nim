#include "string.h"
size_t strlen(const char *str){
	size_t n;
	for(n=0; *str!='\0'; str++, n++);
	return n;
}

void *memcpy(void *s1, const void *s2, size_t n){
    char        *p1 = (char *)s1;
    const char  *p2 = (const char *)s2;

    while (n-- > 0) {
        *p1 = *p2;
        p1++;
        p2++;
    }
    return s1;
}

void *memset(void *s, int c, size_t n){
    const unsigned char uc = c;
    unsigned char       *p = (unsigned char *)s;

    while (n-- > 0)
        *p++ = uc;

    return s;
}
