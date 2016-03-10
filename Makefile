<<<<<<< HEAD
makeall: calc tempcalc test
	
	
calc: calc.cc calc.h
	g++ calc.cc -o calc
tempcalc: tempcalc.cc tempcalc.h
	g++ tempcalc.cc -o tempcalc
test: test.cc
	g++ test.cc -o test
=======
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
all:clean testrun
.PHONY:calc tempcalc

>>>>>>> a54fe79a7432422af778520670d2a3ba8fab8435
