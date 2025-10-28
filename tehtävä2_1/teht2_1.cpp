#include <iostream>
#include <string>
using namespace std;

//Luo kokonaisluku (int) -muuttuja ja osoitin, joka osoittaa kyseiseen muuttujaan. Tulosta muuttujan arvo
//sekä suoraan että osoittimen avulla.

int main()
{
	int x = 11;
	int* y; 
	y = &x;

	cout << "x arvo on: " << x << endl;
	cout << "osoittimen y arvo on:" << *y << endl;
}