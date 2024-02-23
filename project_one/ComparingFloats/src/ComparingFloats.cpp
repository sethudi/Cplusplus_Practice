//============================================================================
// Name        : ComparingFloats.cpp
// Author      : Sethudi Mapunya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float value1 = 1.1;

	//can not use == with floats
	if(value1 == 1.1) {
		cout << "equals" << endl;
	}
	else {
		cout << "not equal" << endl;
	}

	cout << setprecision(10) << value1 << endl;


	return 0;
}
