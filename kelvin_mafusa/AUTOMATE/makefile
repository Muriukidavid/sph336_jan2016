$(OBJ) = *.cc
CXX = g++
$(OUT)  =$(OBJ.*)

calc:
	g++ calc.cc -o calc
	./calc
tempcalc:
	g++ tempcalc.cc -o tempcalc
	./tempcalc
testrun:test.cc
	@echo Building testrun
	g++ test.cc -o testbin
testrun2:testrun
	./testbin
clean: 
	rm  -f calc
	rm  -f tempcalc	
	rm  -f *.o
	rm  -f *~*
	rm  -f testbin
.PHONY:calc tempcalc
compileall:
	CXX $(OBJ) -o $(OUT)
	
