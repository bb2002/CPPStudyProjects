#include "pch.h"
#include <iostream>

using namespace std;

class Nose {
public:
	void Take() const { cout << "内 唤" << endl; }
};

class Shur {
public:
	void Take() const { cout << "力眉扁 兑" << endl; }
};

class NoFuck {
public:
	void Take() const { cout << "内 力芭" << endl; }
};

class Med {
public:
	void TakeNose(const Nose& n) const { n.Take(); }
	void TakeShur(const Shur& n) const { n.Take(); }
	void TakeNoFuck(const NoFuck& n) const { n.Take(); }
};

int main() {
	Nose n;
	Shur s;
	NoFuck f;
	Med m;

	m.TakeNoFuck(f);
	m.TakeNose(n);
	m.TakeShur(s);
}