CXX = g++

all: decoder2by4

decoder2by4: 
	@echo 'building file $(@F)'
	$(CXX) -I /usr/local/systemc-2.3.1/include -g3 -Wall -c decoder2by4.cc
	$(CXX) -L /usr/local/systemc-2.3.1/lib-linux64 -o "decoder2by4" decoder2by4.o -lsystemc

	./decoder2by4
	gtkwave timing_diagram.vcd

clean:
	rm -f *.out *.o decoder2by4

.PHONY: decoder2by4
