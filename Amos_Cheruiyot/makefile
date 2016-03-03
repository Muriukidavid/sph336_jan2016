#calc:
#	g++ calc.cc -o calc
#	./calc
#tempcalc:
#	g++ tempcalc.cc -o tempcalc
#	./tempcalc
#testrun:test.cc
#	@echo Building testrun
#	g++ test.cc -o testbin
#testrun2:testrun
#	./testbin
#clean: 
#	rm  -f calc
#	rm  -f tempcalc	
#	rm  -f *.o
#	rm  -f *~*
#	rm  -f testbin
#.PHONY:calc tempcalc
 
CC = gcc
CFLAGS = -g -O2 -std=gnu99 -static -Wall -Wextra -Isrc -rdynamic -fomit-frame-pointer
all: $(patsubst %.c, %.out, $(wildcard *.c))
%.out: %.c Makefile
    $(CC) $(CFLAGS) $< -o $@ -lm
clean:
    rm *.out
