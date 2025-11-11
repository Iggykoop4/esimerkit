#include <iostream>
#include <string>
using namespace std;

class Book {

private:

	string _title;
	int _pages;

public:

	Book(const string& title, int pages) : _title(title), _pages(pages){}
	Book(const Book& copybook) : _title(copybook._title), _pages(copybook._pages)
	{
		cout << "Copy constructor called for <" << _title << "> " << endl;
		cout << "Page amount: <" << _pages << ">" << endl;
	}
};

int main()
{
	Book b1("C++ Basics", 200);
	Book b2 = b1;
	return 0;
}