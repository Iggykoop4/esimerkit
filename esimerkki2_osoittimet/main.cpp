#include <iostream>
#include <string>
using namespace std;

int main() 
{
	char c = 53; //c on char-tyyppinen muuttuja, jonka arvo on 53

	char* y = &c; //y viittaa c:n muistiosoitteeseen

	*y = 100; //muutetaan c:n arvoa y:n kautta

	cout << (int)c; //tulostaa c:n uusi arvo 100

	return 0;
}