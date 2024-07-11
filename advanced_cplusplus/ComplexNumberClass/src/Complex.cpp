/*
 * Complex.cpp
 *
 *  Created on: 14 Mar 2024
 *      Author: stmap
 */


#include "Complex.h"

namespace cp {
Complex::Complex(): real(0), imaginary(0) {

}

Complex::Complex(double real, double imaginary): real(real), imaginary(real) {

}

Complex::Complex(const Complex &other) {
	cout << "Copy" << endl;
	real = other.real;
	imaginary = other.imaginary;

}

const Complex &Complex::operator=(const Complex &other){
	cout << "Assignemt" << endl;
	real = other.real;
	imaginary = other.imaginary;
	return *this;
}

ostream &operator<<(ostream &out, const Complex &other){
	out << other.real << " : " << other.imaginary ;
	return out;
}

} /* namespace cp */
