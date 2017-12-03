%.o:%.S
	as -c $< -o $(<:.S=.o)

%.o:%.c
	gcc -c $< -o $(<:.c=.o)

all:
	make libnim.a

libnim.a: print.o string.o sys/mman.o libc.o api.o
	ar rvs $@ $^
