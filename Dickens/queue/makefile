all: queue.c main.c
	gcc -c main.c queue.c
	gcc -o queue main.o queue.o
	./queue

clean:
	rm -f queue
	rm -f *~
	rm *.o
