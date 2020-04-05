CC=gcc
CFLAGS=-I
DEPS=hellomake.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

wackybuild: hellomake.o hellofunc.o
	 $(CC) -o hellomake hellomake.o hellofunc.o
