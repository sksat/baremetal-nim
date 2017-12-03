CC	= gcc

LNIM	= libnim.a
LNIMOBJS= print.o string.o sys/mman.o libc.o api.o

%.o:%.S
	as --32 -c $< -o $(<:.S=.o)

%.o:%.c
	$(CC) -m32 -g -c $< -o $(<:.c=.o)

all:
	make libnim.a

clean:
	rm -rf $(LNIMOBJS)

libnim.a: $(LNIMOBJS)
	ar rvs $@ $^
