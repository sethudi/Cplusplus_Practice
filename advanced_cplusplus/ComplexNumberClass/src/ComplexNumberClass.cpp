//============================================================================
// Name        : ComplexNumberClass.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"
using namespace std;
using namespace cp;

int main() {
	Complex obj(4.55, 6.8);
	Complex oj = obj;
	obj =oj;
	cout << obj << endl;
	return 0;
}
