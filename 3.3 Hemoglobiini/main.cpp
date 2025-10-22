#include <iostream>
#include <string>
using namespace std;

int main() 
{
	bool isMan = false;
	cout << "Anna sukupuolesi (mies/nainen): ";
	string input;

	if (!(cin >> input)) return 0;

	for (char &c : input) 
	{
		if (c >= 'A' && c <= 'Z') 
		{
			c = char(c - 'A' + 'a');
		}
	}
	if (input == "mies") 
	{
		isMan = true;
	}
	else if(input == "nainen") 
	{
		isMan = false;
	}
	else 
	{
		cout << "Tuntematon syöte! kirjoita mies tai nainen" << endl;
		return 0;
	}

	cout << "Valitsit sukupuolen: " << (isMan ? "mies" : "nainen") << endl;

	cout << "Anna hemoglobiini (g/l): ";
	double hb;
	if (!(cin >> hb)) {
		cout << "Virheellinen arvo.\n";
		return 0;
	}

	if (isMan) {
		if (hb < 134) cout << "Alhainen arvo... (alle 134)\n";
		else if (hb <= 195) cout << "Normaali arvo.. (134-195)\n";
		else cout << "Korkea arvo... (yli 196)\n";
	}
	else {
		if (hb < 117) cout << "Alhainen arvo... (alle 117)\n";
		else if (hb <= 175) cout << "Normaali arvo...(normaali 117-175) \n";
		else cout << "Korkea arvo... (yli 175)\n";
	}

	return 0;
}