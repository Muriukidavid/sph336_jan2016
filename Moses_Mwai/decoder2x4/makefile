CXX = g++

all: decoder2x4

decoder2x4: 
	@echo 'building file $(@F)'
	$(CXX) -I /usr/local/systemc-2.3.1/include -g3 -Wall -c decoder2x4.cc
	$(CXX) -L /usr/local/systemc-2.3.1/lib-linux64 -o "decoder2x4" decoder2x4.o -lsystemc

	./decoder2x4
	gtkwave timing_diagram.vcd

clean:
	rm -f *.out *.o decoder2x4

.PHONY: decoder2x4
