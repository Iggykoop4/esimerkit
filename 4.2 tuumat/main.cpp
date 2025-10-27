#include <iostream>
#include <string>
using namespace std;

int main() 
{
    cout << "Anna tuumia (negatiivinen arvo = quit):\n";
    double tuumat;
    while (true) 
    {
        cout << "Montako tuumaa muunnetaan cm?: ";
        if (!(cin >> tuumat)) {
            cout << "Virheellinen syöte. Lopetetaan.\n";
            break;
        }
        if (tuumat < 0) {
            cout << "Lopetetaan.\n";
            break;
        }
        double cm = tuumat * 2.54;
        cout << tuumat << " tuumaa = " << cm << " cm\n";
    }
    return 0;
}