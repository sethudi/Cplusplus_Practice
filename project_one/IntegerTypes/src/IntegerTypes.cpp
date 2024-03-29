//============================================================================
// Name        : IntegerTypes.cpp
// Author      : Sethudi Mapunya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits.h>

using namespace std;

int main() {

	int value = -54656;
	cout << value << endl;

	cout << "Max int value: " << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;

	long int lValue = 2345325345345;
	cout << lValue << endl;

	short int sValue = 23434;
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;

	unsigned int uValue = 2342343;
	cout << uValue << endl;

	return 0;
}
