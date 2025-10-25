#include <iostream>
#include <string>
using namespace std;

int main() 
{
	cout << "Anna vuosi: ";
	int year;
	if (!(cin >> year)) 
	{
		cout << "Virheellinen syöte.\n";
		return 0;
	}
	bool isLeap = false;
	if (year % 4 == 0) 
	{
		if (year % 100 == 0) 
		{
			if (year % 400 == 0) 
			{
				isLeap = true;
			}
			else 
			{
				isLeap = false;
			}
		}
		else 
		{
			isLeap = true;
		}
	}
	else 
	{
		isLeap = false;
	}
	if (isLeap) 
	{
		cout << year << " on karkausvuosi.\n";
	}
	else 
	{
		cout << year << " ei ole karkausvuosi.\n";
	}
	return 0;
}	