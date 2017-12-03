#define stdout 1
#define stderr 2

#include "sys/types.h"

struct IO_FILE;
typedef struct IO_FILE	FILE;

#define puts(str)
#define fputs(str, f) 0
#define ferror(f) 0
#define fflush(f)
#define exit(c)

typedef __off_t fpos_t;
typedef __off_t off_t;
