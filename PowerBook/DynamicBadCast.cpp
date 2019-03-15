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
	SoSimple simObj;
	SoSimple& ref = simObj;

	try {
		SoComplex& comRef = dynamic_cast<SoComplex&>(ref);
		comRef.ShowSimpleInfo();
	}
	catch (bad_cast& ex) {
		cout << ex.what() << endl;
	}
}