#include "mman.h"

static char HugeBuf[524288+4096];

void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset){
	static void *p = HugeBuf;
	void *tmp = p;
	p += length;
	return tmp;
}
