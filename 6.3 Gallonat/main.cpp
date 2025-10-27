#include <iostream>
#include <string>
using namespace std;

double gallonsToLiters(double gallons) {
    return gallons * 3.785; // 1 gallon = 3,785 liters
}

int main()
{
    

    cout << "Anna gallonamäärä (negatiivinen arvo lopettaa):\n";
    double gallons;
    while (true) {
        cout << "Gallonaa: ";
        if (!(cin >> gallons)) {
            cout << "Virheellinen syöte. Lopetetaan.\n";
            break;
        }
        if (gallons < 0) {
            cout << "Lopetetaan.\n";
            break;
        }
        double liters = gallonsToLiters(gallons);
        cout << gallons << " gallonaa = " << liters << " litraa\n";
    }
    return 0;
}