all: queue.c main.c
	gcc -c queue.c main.c
	gcc -o queue queue.o main.o
	./queue

clean: 
	rm -f *.o
	rm -f *~
	rm -f queue
