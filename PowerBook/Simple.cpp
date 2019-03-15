#include "pch.h"
#include <iostream>

using namespace std;

class AAA {
public:
	AAA() {
		cout << "empty aaa object" << endl;
	}

	void show() {
		cout << "aaa class" << endl;
	}

private:
	AAA(int a) {
		cout << a << endl;
	}
};

class BBB {
private:
	AAA& ref;
	const int& num;

public:
	BBB(AAA a, const int n) : ref(a), num(n) {

	}

	void show() {
		ref.show();
		cout << "and" << endl;
		cout << " bbb class." << endl;
	}
};
int main() {
	//AAA obj1(10);
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.show();
}