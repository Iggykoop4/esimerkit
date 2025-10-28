#include <iostream>
#include <string>
using namespace std;

int main() 
{
	char c = 53;

	char* y = &c;

	*y = 100;

	cout << (int)c;

	return 0;
}