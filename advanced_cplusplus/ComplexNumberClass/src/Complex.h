/*
 * Complex.h
 *
 *  Created on: 14 Mar 2024
 *      Author: stmap
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
using namespace std;

namespace cp {

class Complex {
private:
	double real;
	double imaginary;
public:
	Complex();
	Complex(double real, double imaginary);
	Complex(const Complex &other);
	const Complex &operator=(const Complex &other);

	friend ostream &operator<<(ostream &out, const Complex &other);
};

} /* namespace cp */

#endif /* COMPLEX_H_ */
