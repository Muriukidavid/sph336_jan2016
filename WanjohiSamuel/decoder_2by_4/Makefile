
GTKWAVE:=$(which gtkwave)

SRC= decoder_2by4.cc
OBJ= decoder_2by4.o
 
all: decoder
 
decoder:prerequisites $(SRC)
	@echo 'building file $(@F)'
	$(CXX) -I/usr/local/systemc-2.3.1/include -O0 -g3 -Wall -c $(SRC)
	$(CXX) -L/usr/local/systemc-2.3.1/lib-linux64 -o "decoder" $(OBJ) -lsystemc
	./decoder
	gtkwave -c 4 timing_diagram.vcd

prerequisites: 
ifneq "$(GTKWAVE)" "/usr/bin/gtkwave"
	@echo 'installing gtkwave, please be patient'
	sudo apt-get install -y gtkwave
endif

.PHONY: decoder

clean:
	rm -f *~
	rm -f *.o
	rm -f decoder
	rm -f *.vcd
