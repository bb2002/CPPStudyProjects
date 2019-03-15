#include "pch.h"

using namespace std;

class First {
private:
	int a, b;

public:
	First(int a = 0, int b = 0) : a(a), b(b) {}

	void show() {
		cout << "a : " << a << "b : " << b << endl;
	}
};

class Second {
private:
	int a, b;

public:
	Second(int a = 0, int b = 0) : a(a), b(b) {}

	void show() {
		cout << "c : " << a << "d : " << b << endl;
	}

	Second& operator=(const Second& a) {
		cout << "Second& =() called." << endl;
		this->a = a.a;
		this->b = a.b;
		return *this;
	}
};

int main() {
	First fsrc(111, 222);
	First fcpy;

	Second ssrc(333, 444);
	Second scpy;

	fcpy = fsrc;
	scpy = ssrc;

	fcpy.show();
	scpy.show();

	First fob1, fob2;
	Second sob1, sob2;
	fob1 = fob2 = fsrc;
	sob1 = sob2 = ssrc;

	fob1.show();
	fob2.show();
	sob1.show();
	sob2.show();

}