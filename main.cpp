/*
 * main.cpp
 */

#include <iostream>
#include <vector>
#include "hw02.h"
using namespace std;

int main() {

	complex number_1, number_2(3), number_3(3.1), number_4(1, -1), number_5("-i");

	number_1.setImag(1);
	number_1.setReal(1);
	number_2.print();
	number_1.add(number_2);
	number_1.print();
	number_1.subtract(number_2);
	number_1.print();
	number_3.print();
	number_4.divide(number_2);
	number_4.print();
	number_5.print();
	return 0;
}
