#include "pch.h"
#include <iostream>

class Base {
private:
	int a;

protected:
	int b;

public:
	int c;

	Base(int a, int b, int c) : a(a), b(b), c(c) {}
};

class Derived : protected Base {
public:
	Derived(int a, int b, int c) : Base(a, b, c) {}
};

int main() {
	Derived d(1,2,3);
	std::cout << d.c << std::endl;
}