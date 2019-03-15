#include "pch.h"

class BaseOne {
public:
	void fun() {
		cout << "BASE ONE FUN" << endl;
	}
};

class BaseTwo {
public:
	void fun() {
		cout << "BASE TWO RUN" << endl;
	}
};

class Multi : public BaseOne, protected BaseTwo {
public:
	void complex() {
		BaseTwo::fun();
	}
};

int main() {
	Multi m;
	m.complex();
}