/*
 * header
 */
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


class complex
{
private:
	float real;
	float imag;

public:
	complex() ; //default constructor

	complex(int val) ; //conversion constructor

	complex(double val) ; //conversion constructor

	complex(string val); //conversion constructor

	complex(double a, double b) ; //İki parametre alan constructor
	
	double getReal()const;   //gerçel değeri tutan özel veri üyelerine erişen fonksiyon 
	double getImag()const;   //sanal değeri tutan özel veri üyelerine erişen fonksiyon 
	
	void setReal(double val);   //gerçel değeri düzenlemek için fonksiyon  
	void setImag(double val);   //sanal değeri düzenlemek için fonksiyon  
	
	void add(complex &x); //toplama fonksiyonu
	void subtract(complex &x); // çıkarma fonksiyonu
        void divide(complex &x); // bölme fonksiyonu

	void print()const; // print fonksiyonu

	
};
