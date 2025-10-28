#include <iostream>
#include <string>
using namespace std;


//M‰‰rittele taulukko, jossa on viisi kokonaislukua. K‰yt‰ osoitinaritmetiikkaa (eli osoittimia ja ++
//operaattoria), jotta voit tulostaa jokaisen taulukon alkion arvon.
int main()
{
	int x[5] = {1, 2, 3, 4, 5};

	int* p = x;
	int i = 0;

	while (i < 5) 
	{
		cout << *p << "\n";
		i++;
		p++;
	}

}