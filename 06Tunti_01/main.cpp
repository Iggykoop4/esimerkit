#include <iostream>
#include <string>
using namespace std;

class Car
{

private:
	string _brand;
	int _year;

public:

	void set_brand(const string& brand)
	{
		_brand = brand;
	}

	void set_year(int year)
	{
		_year = year;
	}

	void print_info() const
	{
		cout << "Car brand is: " << _brand << endl;
		cout << "Production year: " << _year << endl;
	}


};

int main()
{
	Car fiat;
	fiat.set_brand("Fiat");
	fiat.set_year(1231);
	fiat.print_info();
	return 0;
}