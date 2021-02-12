#include <iostream>

using namespace std;

class base {
	private:
		int a;
	protected:
		int b;
	public:
		int c;
		void showBase() { cout << "a = " << a << ", b = " << b << " , c = " << c << endl; }
		void set() { a = 100; b = 200, c = 300; }
};
                                                                                       
class derived : public base {
	private:
		
	public:
		void setB(int val) { b = val; }
		void setC(int val) { c = val; }
		void show() { cout << " b = " << b << " , c = " << c << endl; }
};

int main() {
	derived d;
	d.setB(2);
	d.setC(3);
	d.show();
	return 0;
}