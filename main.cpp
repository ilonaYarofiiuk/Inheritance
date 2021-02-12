#include <iostream>

using namespace std;

class base {
protected:
	int a;

public:
	void showA() { cout << "a =  " << a << endl; }

};

class base2 {
protected:
	int b;

public:
	void showB() { cout << "b =  " << b << endl; }

};

class derived : public base, public base2 {
	public:
		void set() { a = 100; b = 200;}
};

int main() {
	derived d;
	d.set();
	d.showA();
	d.showB();
	return 0;
}