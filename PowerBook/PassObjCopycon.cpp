#include "pch.h"
#include <iostream>

using namespace std;

class Simple {
private:
	int num;

public:
	Simple(int a) : num(a) {}

	Simple(const Simple& a) : num(a.num) {
		cout << "called Simple(&) !!!!" << endl;
	}

	void show() {
		cout << " a : " << num << endl;
	}

	Simple& addNum(int n) {
		num += n;
		return *this;
	}
};

Simple SimpleFun(Simple a) {
	a.show();

	cout << "return 하나" << endl;
	return a;
}

int main() {
	Simple ob(7);
	cout << "함수 호출 준비!" << endl;
	SimpleFun(ob).addNum(30).show();
	cout << "함수 호출 끝" << endl;
}