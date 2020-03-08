/*rahime öksüz
 * 18120205018
 * main.cpp
 */

#include <iostream>
#include <vector>
#include "hw02.h"

using namespace std;

double total_real(std::vector<double>v)
{
	double result = 0;
	double average = 0;
	for (unsigned int a = 0; a < v.size(); a += 2)
	{
		result += v[a];
		average = result / (v.size() / 2);

	}
	return average;

}
double total_imag(std::vector<double>y)
{
	double result = 0;
	double average = 0;
	for (unsigned int a = 1; a < y.size(); a += 2)
	{
		result += y[a];
		average = result / (y.size() / 2);
	}
	return average;

}
int main()
{
	vector<double>dizi;

	cout << "enter real and imaginary part repectively:" << endl;
	double real;
	double imag;

	cin >> real;
	cin >> imag;

	while (real > 0) {

		dizi.push_back(real);
		dizi.push_back(imag);
		if (imag < 0)
			cout << "output complex number:" << real << imag << "i";
		else
			cout << "output complex number:" << real << "+" << imag << "i";

		cout << "\tlocation of complex number entered: " << dizi.size() << endl;
		cin >> real;
		cin >> imag;
	}
	cout << "average of the numbers you entered:";
	cout << total_real(dizi) << "+";
	cout << total_imag(dizi) << "i" << endl;

	return 0;
}


