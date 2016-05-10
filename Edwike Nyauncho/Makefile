calc:calc.cc
	g++ calc.cc -o calc
	./calc

tempcalc:tempcalc.cc
	g++ tempcalc.cc -o tempcalc
	./tempcalc

testrun:test.cc
	g++ test.cc -o testrun
	./testrun

clean:
	rm -f tempcalc
	rm -f testrun
	rm -f calc
	rm -f *.o
	rm -f *~  
all:clean testrun calc tempcalc
.PHONY:calc tempcalc testrun 

