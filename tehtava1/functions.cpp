#include <iostream>
#include <string>
using namespace std;

string Greet() 
{
	return "Hello: ";
}

void UserInput() {
	string userinput;
	cout << "Enter your name: ";
	cin >> userinput;
	cout << endl;
	cout << Greet() << userinput;
	cout << endl;
}

