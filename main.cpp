#include <iostream>

using namespace std;

class base
{
protected:
	int a;
public:
	void showA() { cout << "a = " << a << endl; }
};

class bases2
{
protected:
	int b;
public:
	void showB() { cout << "b = " << b << endl; }
};

class derive : public base, public bases2
{
public:
	void set() { a = 100; b = 200; }
};

int main()
{
	derive d;
	d.set();
	d.showA();
	d.showB();

	return 0;
}