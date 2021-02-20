#include <iostream>
#include <math.h>

using namespace std;

class base
{
private:
	int a;
	int b;
public:
	base() { cout << "Base constructor" << endl; a = 10; b = 20; }
	void showBase() { cout << "a = " << a << ", b = " << b << endl; }
	~base() { cout << "Base destructor" << endl; }
};

class derive : public base
{
private:
	int c;
public:
	derive() { cout << "Derive constructor" << endl; c = 30; }
	void showDerive() { cout << "c = " << c << endl; }
	~derive() { cout << "Derive destructor" << endl; }
};

class derive2 : public derive
{
	private:
		int d;
public:
	derive2() { cout << "Derive2 constructor" << endl; d = 100; }
	void showDerive2() { cout << "d = " << d << endl; }
	~derive2() { cout << "Derive2 destructor" << endl; }
};

int main()
{
	derive d;
	d.showBase();
	d.showDerive();
	derive2 d2;
	d2.showBase();
	d2.showDerive();
	d2.showDerive2();

	return 0;
}
