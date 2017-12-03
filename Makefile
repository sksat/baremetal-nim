CC	= gcc

%.o:%.c
	$(CC) -m32 -g -c $<

NIMSRC	= main.nim
NIMOBJS	= nimcache/*.o
LNIMOBJS= libnim/print.o
OBJS	= $(NIMOBJS) libnim/libnim.a entry.o

TARGET	= test

run:$(TARGET)
	./$(TARGET)

harib:
	make hrbnim

clean:
	rm -rf $(OBJS)
	make -C libnim clean

$(TARGET):$(OBJS)
	$(CC) -m32 -o $@ $^ -nostdlib -lgcc

entry.o : nimcache/main.h

$(NIMOBJS):
	make nim

nimcache/main.h:
	make nim

nim:$(NIMSRC)
	nim c --cpu:i386 -t:-m32 --noMain --noLinking --passC:"-g -Ilibnim" -d:release --header:main.h $(NIMSRC)

libnim/libnim.a:
	make -C libnim
