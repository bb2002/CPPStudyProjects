#include "pch.h"

class Base {
public:
	Base() { cout << "BASE ()!!" << endl; }

	void fun() {
		cout << "BASE FUN() !!" << endl;
	}
};

class MiddleOne : virtual public Base {
public:
	MiddleOne() : Base() {
		cout << "MiddleOne()" << endl;
	}

	void MiddleOneFun() {
		fun();
		cout << "MiddleOneFun()" << endl;
	}
};

class MiddleTwo : virtual public Base {
public:
	MiddleTwo() : Base() {
		cout << "MiddleTwo()" << endl;
	}

	void MiddleTwoFun() {
		fun();
		cout << "MiddleTwoFun()" << endl;
	}
};

class FinalClass : public MiddleOne, public MiddleTwo {
public:
	FinalClass() : MiddleOne(), MiddleTwo() {
		cout << "FINAL()" << endl;
	}

	void complex() {
		MiddleOneFun();
		MiddleTwoFun();
		fun();
	}
};

int main() {
	cout << "按眉 积己 傈 ##########################" << endl;
	FinalClass a;
	a.complex();
	cout << "按眉 积己 场~###########################" << endl;
}