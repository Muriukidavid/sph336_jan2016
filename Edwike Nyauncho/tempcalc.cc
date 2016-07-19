#include <iostream>
#include "tempcalc.h"

using namespace std;

int main(int argc, char* argv[]){
float sum, a=9.5, b=6.3;

calculator<float>calc;
sum=calc.add(a,b);
cout<<"The sum of "<<a<<" and "<<b<<"is "<<sum<<endl;
return 0;
}
