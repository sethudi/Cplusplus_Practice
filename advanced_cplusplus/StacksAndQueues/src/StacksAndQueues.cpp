//============================================================================
// Name        : StacksAndQueues.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;


class Test {
	string name;
public:

	explicit Test(string name) :name(name) {

	}

	~Test() {

	}

	void print() const {
		cout << name << endl;
	}
};

// You can't iterate through stacks or queues
int main(int argc, char const *argv[]) {
	//LIFO
	stack<Test> testStack;

	testStack.push(Test("Mike"));
	testStack.push(Test("John"));
	testStack.push(Test("Sue"));

	while (testStack.size() > 0) {
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}

	//FIFO
	queue<Test> testQueue;

	testQueue.push(Test("Mike"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Sue"));

	cout << endl;

	testQueue.back().print();

	cout << endl;
	while (testQueue.size() > 0) {
		Test &test = testQueue.front();
		test.print();
		testQueue.pop();
	}

	return 0;
}
