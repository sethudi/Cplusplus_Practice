/*
 * Person.cpp
 *
 *  Created on: 16 Feb 2024
 *      Author: stmap
 */

#include "Person.h"
#include <sstream>

//This is how you could use "This"
//Person::Person(string name, int age){
//	this->name = name;
//	this->age = age;
//}

string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}

