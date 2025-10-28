#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x = 110;

	int* y = &x; // y osoittaa x:‰‰n
	int** z = &y; // z osoittaa y:hyn

	**z = 200; // muuttaa x:n arvon
	cout << x << "\n";
}