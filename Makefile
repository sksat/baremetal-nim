%.o:%.c
	gcc -m32 -g -c $<

NIMSRC	= main.nim
NIMOBJS	= nimcache/main.o nimcache/stdlib_system.o
LNIMOBJS= libnim/print.o
OBJS	= $(NIMOBJS) libnim/libnim.a entry.o

TARGET	= test

run:$(TARGET)
	./$(TARGET)

clean:
	rm -rf $(OBJS)
	rm -rf $(LNIMOBJS)

$(TARGET):$(OBJS)
	gcc -m32 -o $@ $^ -nostdlib

entry.o : nimcache/main.h

$(NIMOBJS) nimcache/main.h :$(NIMSRC)
	nim c --cpu:i386 -t:-m32 --noMain --noLinking --passC:"-g -Ilibnim" -d:release --header:main.h $(NIMSRC)

libnim/libnim.a:
	make -C libnim
