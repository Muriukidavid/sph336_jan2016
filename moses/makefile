all : calc tempcalc
	
.PHONY : calc tempcalc
tempcalc:tempcalc.cc
	g++ tempcalc.cc -o tempcalc
	./tempcalc
clean:
	rm -f tempcalc
	rm -f testbin
	rm -f *.o
	rm -f *~
	rm -f calc


calc:calc.cc
	g++ calc.cc -o calc
	./calc

