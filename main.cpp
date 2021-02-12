#include <iostream>

using namespace std;

class base {
	protected:
		int a;
		int b;
	public:
		base() {
			cout << "Base constructor " << endl;
			a = 10;
			b = 20;
		}
		void showBase() { cout << "a = " << a << ", b = " << b << endl; }
		~base() { cout << "Base destructor " << endl; }
};

class derived : public base {
	private:
		int c;
	public:
		derived() {
			cout << "Derived constructor " << endl;
			c = 30;
			
		}
		void showDerived() { cout << "c = " << c << endl; }
		~derived() { cout << "Derived destructor " << endl; }
};

class derived2 : public derived {
	private:
		int d;
	public:
		derived2() {
			cout << "Derived2 constructor " << endl;
			d = 100;

		}
		void showDerived2() { cout << "d = " << d << endl; }
		~derived2() { cout << "Derived2 destructor " << endl; }
};

int main() {
	derived d;
	d.showBase();
	d.showDerived();

	derived2 d2;
	d2.showBase();
	d2.showDerived();
	d2.showDerived2();
	return 0;
}