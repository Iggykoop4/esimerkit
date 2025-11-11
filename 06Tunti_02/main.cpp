#include <iostream>
#include <string>
using namespace std;

class Lamp 
{

private:

	//bool _on = false;
	bool _on;

public:

	

	Lamp()
	{
		cout << "Lamp created!";
		_on = false;

	}

	~Lamp() 
	{
		cout << "Lamp destroyed";

	}

	void Turn_on() {
		_on = true;
	}

	void Turn_off() {
		_on = false;
	}
		


};

int main() {
	Lamp Lamppu;
	Lamppu.Turn_on();
	Lamppu.Turn_off();

	return 0;
}