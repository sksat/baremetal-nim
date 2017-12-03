%.o:%.S
	as --32 -c $< -o $(<:.S=.o)

%.o:%.c
	gcc -m32 -g -c $< -o $(<:.c=.o)

all:
	make libnim.a

libnim.a: print.o string.o sys/mman.o libc.o api.o
	ar rvs $@ $^
