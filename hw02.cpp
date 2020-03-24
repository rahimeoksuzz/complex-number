/*
 * karmasik.cpp
 */
#include <iostream>
#include "hw02.h"
using namespace std;

complex::complex() {
	this->imag = 0;
	this->real = 0;
}

complex::complex(int val) {
	this->real = val;

}

complex::complex(double val) {
	this->real = val;
}

complex::complex(double a, double b) {
	this->real = a;
	this->imag = b;
}

double complex::getReal()const {
	return real;
}

double complex::getImag()const {
	return imag;
}

void complex::setReal(double val) {
	this->real = val;
}

void complex::setImag(double val) {
	this->imag = val;
}

void complex::add(complex &x) {
	this->real += x.real;
	this->imag += x.imag;
}

void complex::subtract(complex &x) {
	this->real -= x.real;
	this->imag -= x.imag;
}

void complex::divide(complex &x) {
	double a = x.real;
	double b = x.imag;
	this->real = (real*a - imag * b) / (a*a - b * b);
	this->imag = (real*b + imag * a) / (a*a - b * b);
}


void complex::print()const {
	if (real == 0)
		cout << "complex number:" << getImag() << "i" << endl;
	else {
		if (imag < 0)
			cout << "complex number:" << getReal() << getImag() << "i" << endl;
		else if (imag == 0)
			cout << "complex number:" << getReal() << endl;
		else
			cout << "complex number:" << getReal() << "+" << getImag() << "i" << endl;
	}
}
