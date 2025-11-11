#include <iostream>
#include <string>
using namespace std;

class Box
{
private:
	int _size;

public:
	Box() : _size(0) {}

	void set_size(int size) 
	{
		_size = size;
	}

	void show_size() const 
	{
		cout << _size << endl;
	}
};

int main()
{
	Box* b = new Box();
	b->set_size(67);
	b->show_size();
	delete b;
	return 0;
}