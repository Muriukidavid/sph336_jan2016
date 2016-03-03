all:calc tempcalc testbuild testrun
calc:
	g++ calc.cc -o calc
	./calc
tempcalc:
	g++ tempcalc.cc -o tempcalc
	./tempcalc
testbuild:test.cc
	@echo building testrun...
	g++ test.cc -o testbin
testrun:testbuild
	./testbin 23
clean:
	rm -f testbin
	rm -f *.o
	rm -f *~  
	rm calc tempcalc
.PHONY:calc tempcalc

