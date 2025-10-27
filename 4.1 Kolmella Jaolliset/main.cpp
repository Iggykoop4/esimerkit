#include <iostream>
#include <string>
using namespace std;

int main() 
{
    cout << "Syötä kokonaislukuja. Lopeta syöttämällä ei-numeraalinen arvo tai Q.\n";
    int n;
    while (true)
    {
        cout << "Anna kokonaisluku: ";
        if (!(cin >> n)) 
        {
            cout << "Lopetetaan.\n";
            break;
        }

        if (n % 3 == 0) 
        {
            cout << "Luku " << n << " on jaollinen kolmella.\n";
        } 
        else 
        {
            cout << "Luku " << n << " ei ole jaollinen kolmella.\n";
        }
    }
    return 0;
}