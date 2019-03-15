#include "pch.h"
#include <iostream>

using namespace std;

class Simple {
	int a;
	mutable int b;

public:
	Simple(int a, int b) : a(a), b(b) {}

	void show() const {
		cout << a << ", " << b << endl;
	}

	void copy() const {
		b = a;
	}
};

int main() {
	Simple a(1, 2);
	a.show();
	a.copy();
	a.show();
}