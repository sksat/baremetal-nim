%.o:%.c
	gcc -c $<

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
	gcc -o $@ $^ -nostdlib

entry.o : nimcache/main.h

$(NIMOBJS) nimcache/main.h :$(NIMSRC)
	nim c --noMain --noLinking --passC:-Ilibnim -d:release --header:main.h $(NIMSRC)

libnim/libnim.a:
	make -C libnim
