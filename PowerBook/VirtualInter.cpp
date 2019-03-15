#include "pch.h"

using namespace std;

class AAA {
private:
	int a;

public:
	virtual void fun1() {
		cout << "FUN1" << endl;
	}

	virtual void fun2() {
		cout << "FUN2" << endl;
	}
};

class BBB : public AAA {
private: 
	int b;

public:
	virtual void fun1() {
		cout << "BBB::Fun1" << endl;
	}

	void fun3() {
		cout << "FUN3" << endl;
	}
};

int main() {
	AAA* aPtr = new AAA();
	aPtr->fun1();

	BBB* bPtr = new BBB();
	bPtr->fun1();
}