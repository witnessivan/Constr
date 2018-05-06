
#include "complex.h"



Complex::Complex(double re, double im) {
	this->re = re;
	this->im = im;
	cout << "Enter realy complex numbers: ";
	cin >> re;
	cout << "Enter Imag complex numbers: ";
	cin >> im;
}

Complex::~Complex() {

}

Complex::Complex() {
	this->re = 0.0;
	this->im = 0.0;
}

void Complex::printResult(int r, int i) {
	cout << "\n" << "result: ";

	if (r != 0) {
		cout << "" << r;
		if (i > 0 && i != 1) {
			cout << "+" << i;
		}
		if (i == 1) {
			cout << "+";
		}
		if (i < 0) {
			if (i != (-1)) {
				cout << "" << i;
			}
			else
				cout << "-";
		}
		if (i != 0) {
			cout << "i" << endl;
		}
	}
	else {
		if (i != 0) {
			if (i != 1 && i != (-1)) {
				cout << "" << i;
			}
			if (i == (-1)) {
				cout << "-";
			}
			cout << "i" << endl;
		}
		else
			cout << "0" << endl;
	}
	cout << "\n";
}

void Complex::add(Complex &a, Complex &b) {
	int r, i;
	r = a.re + b.re;
	i = a.im + b.im;
	printResult(r, i);
}

void Complex::substract(Complex &a, Complex &b) {
	int r, i;
	r = (-1 * b.re) + a.re;
	i = (-1 * b.im) + a.im;
	printResult(r, i);
}

void Complex::multiply(Complex &a, Complex &b) {
	int r, i;
	r = (a.re*b.re) - (a.im*b.im);
	i = (a.re*b.im) + (b.re*a.im);
	printResult(r, i);
}

void Complex::division(Complex &a, Complex &b) {
	int x1, x2, x3;
	x1 = (a.re * b.re) + (a.im * b.im);
	x2 = (b.re * a.im) - (a.re * b.im);
	x3 = (b.re * b.re) + (b.im * b.im);

	if (x2 > 0) {
		cout << "result division: " << x1 << "/" << x3 << "+" << x2 << "/" << x3 << "i";
	}
	else
		cout << "result division: " << x1 << "/" << x3 << x2 << "/" << x3 << "i";
	cout << endl;
}

void Complex::menu() {
	cout << "1 - Addition (+)\n" <<
		"2 - Subtraction (-)\n" <<
		"3 - Multiplication (x)\n" <<
		"4 - Division (/)\n" <<
		"Select an operation: ";
}

void Complex::EnterOperation(Complex &a, Complex &b) {
	char op;
	cin >> op;
	switch (op) {
	case '+': {
		add(a, b);
	}
			  break;
	case '-': {
		substract(a, b);
	}
			  break;
	case 'x': {
		multiply(a, b);
	}
			  break;
	case '/': {
		division(a, b);
	}
			  break;
	default: {
		cout << "Unknown action";
		break;
	}
	}
}
