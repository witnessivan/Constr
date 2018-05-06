#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>

using namespace std;

class Complex
{
private:
	double re;
	double im;

public:
	Complex(double re, double im);
	Complex();
	~Complex();
	void setRe(double re) {
		this->re = re;
	}
	void setIm(double im) {
		this->im = im;
	}
	double getRe() {
		return re;
	}
	double getIm() {
		return im;
	}
	void add(Complex &, Complex &);
	void multiply(Complex &, Complex &);
	void substract(Complex &, Complex &);
	void division(Complex &, Complex &);
	void menu();
	void EnterOperation(Complex &, Complex &);
	void printResult(int r, int i);
};

#endif 
