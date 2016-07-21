all: clean ourmake
ourmake: main.c str.c 
	gcc -o hello main.c --include str.c  
clean:
	rm hello
test: hello
	./hello
