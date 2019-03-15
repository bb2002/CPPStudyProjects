#include "pch.h"

using namespace std;

class A {
public:
	void AAA() {
		cout << "A" << endl;
	}

	void Simple() {
		cout << "Simple is best" << endl;
	}
};

class B : public A {
public:
	void BBB() {
		cout << "B" << endl;
	}
};

class C : public B {
public:
	void CCC() {
		cout << "C" << endl;
	}
};

int main() {
	C c;
	c.Simple();
	c.AAA();
	c.BBB();
	c.CCC();

	B& b = c;
	b.Simple();
	b.AAA();
	b.BBB();

	A& a = c;
	a.AAA();
	a.Simple();
}