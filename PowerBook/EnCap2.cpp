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
private:
	Nose nose;
	Shur shur;
	NoFuck nofuck;

public:
	void Take() const {
		nose.Take();
		shur.Take();
		nofuck.Take();
	}
};

int main() {
	Med m;
	m.Take();
}