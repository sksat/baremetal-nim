//#include <stdio.h>
#include "string.h"

int puts(char *str){
	write(1, str, strlen(str));
	write(1, "\n", 1);
	return 0;
}
