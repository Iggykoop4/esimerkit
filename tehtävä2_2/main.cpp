#include <iostream>
#include <string>
using namespace std;

//Luo liukulukumuuttuja (double) ja osoitin siihen. Muuta muuttujan arvoa osoittimen avulla ja tulosta
//muuttujan arvo ennen ja j�lkeen muutoksen.

int main()
{
	double x = 11.2;
	double* p;
	
	p = &x;
	cout << *p << endl;

	*p += 10.5;
	cout << *p << endl;
}