calc:calc.cc
	@echo building calc...
	g++ calc.cc -o calcbin
tempcalc:
	@echo building tempcalc
	g++ tempcalc.cc -o tempbin
run:
	@echo building calc...
	g++ calc.cc -o calcbin
	@echo building tempcalc...  
	g++ tempcalc.cc -o tempbin
	@echo building test...  
	g++ test.cc -o testbin
runall:
	./calcbin
	./tempbin
	./testbin
	
