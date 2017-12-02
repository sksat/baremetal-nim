%.o:%.c
	gcc -c $<

all:
	make libnim.a

libnim.a: print.o string.o
	ar rvs $@ $^
