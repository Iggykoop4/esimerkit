#include <iostream>
#include <string>
using namespace std;

//Kirjoita funktio, joka ottaa parametrinaan osoittimen kokonaislukuun ja moninkertaistaa arvon
//kahdella.Kirjoita testip‰‰ohjelma.

void Funktio(int* p)
{
	*p *= 2;
}

int main()
{
	int x = 5;

	Funktio(&x);
	
	cout << x << endl;
}