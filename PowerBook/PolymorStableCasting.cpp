#include "pch.h"

class SoSimple {
public:
	virtual void ShowSimpleInfo() {
		cout << "SoSimple Base Class" << endl;
	}
};

class SoComplex : public SoSimple {
public:
	void ShowSimpleInfo() {
		cout << "SoComplex Derived Class" << endl;
	}
};

int main() {
	SoSimple* simPtr = new SoSimple;
	SoComplex* comptr = dynamic_cast<SoComplex*>(simPtr);

	if (comptr == NULL) {
		cout << "Çüº¯È¯ ÅÍÁü" << endl;
	}
	else {
		comptr->ShowSimpleInfo();
	}
}