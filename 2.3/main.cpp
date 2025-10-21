#include <iostream>
#include <string>
using namespace std;

int main() {
	double kanta, korkus;
	double ala, piiri;

	cout << "Kanta : ";
	cin >> kanta;
	cout << "Korkeus : ";
	cin >> korkus;

	ala = kanta * korkus;
	piiri = 2 * (kanta + korkus);
	cout << "Ala: " << ala << endl;
	cout << "Piiri: " << piiri << endl;

	return 0;
}