#include "pch.h"
#include <iostream>

using namespace std;

class Simple {
private:
	int a;

public:
	Simple(int a) : a(a) {}
	
	Simple& AddNum(int a) {
		this->a += a;
		return *this;
	}

	void fun() {
		cout << "fun!" << a << endl;
	}

	void fun() const {
		cout << "const fun" << a << endl;
	}

	void show() const {
		cout << a << endl;
	}
};

void funfun(const Simple& a) {
	a.fun();
}

int main() {
	const Simple a(10);
	Simple b(50);

	a.fun();
	b.fun();

	funfun(a);
	funfun(b);
}