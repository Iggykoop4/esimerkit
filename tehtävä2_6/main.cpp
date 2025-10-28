#include <iostream>
#include <string>
using namespace std;

int main()
{
	int* p = nullptr;

	if (!p) {
		cout << "älä käytä\n";
	}
	else
	{
		cout << "Voi käyttää\n";
	}
	
	return 0;
}