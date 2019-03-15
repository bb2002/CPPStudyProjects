#include "pch.h"

class AAA {
public:
	void show() {
		cout << "aaa except" << endl;
	}
};

class BBB : public AAA {
public:
	void show() {
		cout << "bbb excpet" << endl;
	}
};

class CCC : public BBB {
public:
	void show() {
		cout << "ccc except" << endl;
	}
};


void makeExec(int i) {
	if (i == 0) {
		throw AAA();
	}
	else if (i == 1) {
		throw BBB();
	}
	else {
		throw CCC();
	}
}

int main() {
	try {
		makeExec(3);
		makeExec(2);
		makeExec(1);
	}
	catch (AAA& ex) {
		cout << "AAAAA" << endl;
		ex.show();
	}
	catch (BBB& ex) {
		cout << "BBBBB" << endl;
		ex.show();
	}
	catch (CCC& ex) {
		cout << "CCCCC" << endl;
		ex.show();
	}
}