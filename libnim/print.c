//#include <stdio.h>
#include "string.h"

int print_str(char *str){
	write(1, str, strlen(str));
}
