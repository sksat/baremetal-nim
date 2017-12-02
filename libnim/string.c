#include "string.h"
size_t strlen(const char *str){
	size_t n;
	for(n=0; *str!='\0'; str++, n++);
	return n;
}
