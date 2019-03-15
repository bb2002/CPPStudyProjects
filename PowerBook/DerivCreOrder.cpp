#include "pch.h"
#include <iostream>

using namespace std;

class SoBase {
private:
	int baseNum;

public:
	SoBase() : baseNum(20) {
		cout << "SoBase()" << endl;
	}

	SoBase(int a) : baseNum(a) {
		cout << "SoBase(int a)" << endl;
	}

	~SoBase() {
		cout << "~SoBase()" << endl;
	}

	void showBaseData() {
		cout << baseNum << endl;
	}
};

class SoDerived : public SoBase {
private:
	int derivNum;

public:
	SoDerived() : derivNum(30) {
		cout << "SoDerived()" << endl;
	}
	SoDerived(int a) : derivNum(a) {
		cout << "SoDerived(int a)" << endl;
	}
	SoDerived(int a, int b) : SoBase(a), derivNum(b) {
		cout << "SoDerived(a, b)" << endl;
	}

	~SoDerived() {
		cout << "~SoDerived()" << endl;
	}

	void show() {
		showBaseData();
		cout << "derivNum : " << derivNum << endl;
	}
};

int main() {
	cout << "case 1 ####################" << endl;
	SoDerived a;
	a.show();


	cout << "case 2 ####################" << endl;
	SoDerived b(12);
	b.show();


	cout << "case 3 ####################" << endl;
	SoDerived c(16, 38);
	c.show();
}