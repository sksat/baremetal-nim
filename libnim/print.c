//#include <stdio.h>
#include "string.h"

int puts(char *str){
	write(1, str, strlen(str));
}
