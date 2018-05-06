#include "complex.h"


int main()
{
	int k;
	double re, im;
	Complex *a = new Complex();
	Complex *b = new Complex();
	
	k == 0;
	do{
		Complex complex;
		cout << "Enter realy complex numbers: ";
		cin >> re;
		cout << "Enter Imag complex numbers: ";
		cin >> im;
		a->setRe(re);
		a->setIm(im);


		cout << "Enter realy complex numbers: ";
		cin >> re;
		cout << "Enter Imag complex numbers: ";
		cin >> im;
		b->setRe(re);
		b->setIm(im);


		complex.menu();
		complex.EnterOperation(*a, *b);
		cout << "if program end, when enter 1";
		cin >> k;
		delete a;
		delete b;
	}while (k != 1);

	return 0;
}
