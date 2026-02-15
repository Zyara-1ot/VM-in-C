CC = gcc
CFLAGS = -Wall -g -Ilib
SRCDIR = src
LIBDIR = lib

all: vm sum prog

vm: $(SRCDIR)/vm.c $(SRCDIR)/vm_debug.c $(LIBDIR)/vm_debug.h
	$(CC) $(CFLAGS) $(SRCDIR)/vm.c $(SRCDIR)/vm_debug.c -o vm

sum: $(SRCDIR)/sum_progr.c
	$(CC) $(CFLAGS) $(SRCDIR)/sum_progr.c -o sum

prog: $(SRCDIR)/prog.c
	$(CC) $(CFLAGS) $(SRCDIR)/prog.c -o prog

clean:
	rm -f vm sum prog *.o *.obj

.PHONY: all clean
