//============================================================================
// Name        : EnhancedForLoop.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {

	auto texts = { "one", "two", "three" };

	for (auto text : texts)
	{
		cout << text << endl;
	}

	vector<int> numbers;
	numbers.push_back(5);
	numbers.push_back(7);
	numbers.push_back(9);
	numbers.push_back(11);

	for(auto number: numbers)
	{
		cout << number << endl;
	}


	string hello = "Hello";
	for(auto c : hello)
	{
		cout << c << endl;
	}
	return 0;
}
