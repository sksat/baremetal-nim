// mmap(NIM_NIL, size, ((int) 3), ((int) 34), ((int) -1), ((NI) 0));
// addr=0, length=size, prot=PROT_READ|PROT_WRITE, flags=34=MAP_PRIVATE|MAP_ANONYMOUS, fd=-1, offset=0

//
/*
https://linuxjm.osdn.jp/html/LDP_man-pages/man2/mmap.2.html
MAP_ANONYMOUS
マッピングはどのファイルとも関連付けされない。 マッピングの内容は 0 で初期化される。 引き数 fd と offset は無視される。 ただし、実装によっては MAP_ANONYMOUS (もしくは MAP_ANON) が指定された場合、 fd を -1 にする必要があり、 移植性が必要なアプリケーションでは必ず fd を -1 にすべきである。 MAP_ANONYMOUS と MAP_SHARED を組み合わせての利用は カーネル 2.4 以降の Linux でのみサポートされている。 
*/

#include "stdio.h"

#define PROT_READ	0x1
#define PROT_WRITE	0x2
#define PROT_EXEC	0x4
#define PROT_NONE	0x0

#define MAP_SHARED	0x01
#define MAP_PRIVATE	0x02

void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
