//============================================================================
// Name        : Encapsulation.cpp
// Author      : Sethudi Mapunya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


/* The idea with encapsulation is that, make almost everything in the class "private".
 * instance variables, definitely should be private.
 * some functions that i don't want anyone to access, should be private as well.
 */

#include <iostream>
using namespace std;

class Frog {
private:
	string name;

private:
	string getName() { return name; }

public:
	Frog(string name): name(name) {}

	void info() { cout << "My name is: " << getName() << endl; }
};

int main() {

	Frog frog("Freddy");

	frog.info();

	return 0;
}
