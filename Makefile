makeall: calc tempcalc test
	
	
calc: calc.cc calc.h
	g++ calc.cc -o calc
tempcalc: tempcalc.cc tempcalc.h
	g++ tempcalc.cc -o tempcalc
test: test.cc
	g++ test.cc -o test
