/*rahime öksüz
 * 18120205018
 * karmasik.cpp
 */
 
#include "hw02.h"
using namespace std;


void complex::input()
{
	cout << "enter real and imaginary part repectively:" << endl;
	cin >> real;
	cin >> imag;
}

complex complex::operator-=(complex c2)
{

	c2.real -= real;
	c2.imag -= imag;
	return c2;

}
complex complex::operator+()
{
	complex c2;
	complex temp;
	temp.real = real + c2.real;
	temp.imag = imag + c2.imag;
	return temp;
}
complex complex::operator+(complex c2)
{
	complex temp;
	temp.real = real + c2.real;
	temp.imag = imag;
	return temp;
}
/*
complex complex::operator-()
{
	complex c2;
	complex temp;
	temp.real = real - c2.real;
	temp.imag = imag;
	return temp;
}
complex complex::operator-(const complex & c2)
{
	complex temp;
	temp.real = -c2.real;
	temp.imag = -c2.imag;
	return temp;
}*/
complex complex::operator-(complex c2)
{
	complex temp;
	temp.real = real - c2.real;
	temp.imag = imag - c2.imag;
	return temp;
}
complex complex::operator+=(complex c2)
{

	c2.real += real;
	c2.imag += imag;
	return c2;

}
complex complex::operator/=(complex c2)
{

	c2.real /= real;
	c2.imag /= imag;
	return c2;

}
void complex::output()
{
	if (imag < 0)
		cout << "output complex number:" << real << imag << "i";
	else
		cout << "output complex number:" << real << "+" << imag << "i";
}
