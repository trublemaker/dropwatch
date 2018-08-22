all: dropwatch
CC=mipsel-linux-uclibc-gcc

CFLAGS+=-c -g -D_GNU_SOURCE 
#-Wall -Werror -lbfd
LDFLAGS=-L/home/sysware/k2/lib -lbfd -lreadline -lnl-3 -lnl-genl-3 -lncurses
OBJFILES := main.o lookup.o\
	 lookup_bfd.o lookup_kas.o

dropwatch: $(OBJFILES) 
	$(CC) -I/home/sysware/k2/include/libnl3/ -g -o dropwatch $(OBJFILES) $(LDFLAGS) 

%.o: %.c
	$(CC) -I. -I/home/sysware/k2/include -I/home/sysware/k2/include/libnl3/  $(CFLAGS) $<
clean:
	rm -f dropwatch *.o

#/k2/rt-n56u/toolchain-mipsel/src/mipsel-linux-uclibc-toolchain/build-binutils/bfd/