#include <iostream>
#include <string>
using namespace std;

class Point
{
private:
	int _x;
	int _y;

public:

	Point(int x, int y) : _x(x), _y(y)
	{

	}

	void Print() 
	{
		cout << _x << endl;
		cout << _y << endl;
	}
};

int main()
{
	Point Pointti(5,7);

	Pointti.Print();
}