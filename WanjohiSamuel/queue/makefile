#variables
CC=gcc
LD=gcc
CFLAGS=-c
LD_OPTIONS=-o3 -o
TARGET=queue

#get a list of all .c files
C_SRCS :=$(wildcard *.c)
C_OBJS :=$(patsubst %.c, %.o, $(C_SRCS))

#compile all .c files to .o
%.o : %.c
	@echo 'Building files : $(@F)'
	@echo '----------------------'
	@echo 'Invoking : C compiler'
	$(CC) $(CFLAGS) $< -o $@
	@echo 'Finished building : $(@F)'
	@echo ''

all: ourmake test clean

#build binary
ourmake: $(C_OBJS)
	$(LD) $(LD_OPTIONS) queue.out $(C_OBJS)
	
clean:
	rm -f queue.out
	rm -f *.o
	rm -f *~

test: queue.out
	./queue.out

.PHONY: ourmake
