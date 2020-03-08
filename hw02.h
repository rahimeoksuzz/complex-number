/*rahime öksüz
 * 18120205018
 * header
 */
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;


class complex
{
private:
	float real;
	float imag;

public:
	complex() :real(0), imag(0) {}
	void input();
	void output();
	double getcomplex();          
	double setcomplex(complex c2);
	complex operator -(complex c2);
	complex operator -=(complex c2);
	complex operator +=(complex c2);
	complex operator +();
	complex operator -();
	complex operator +(complex c2);
	complex operator /=(complex c2);
	complex conversion(complex c2);
};
