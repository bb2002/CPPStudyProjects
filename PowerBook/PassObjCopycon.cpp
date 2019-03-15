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

	cout << "return �ϳ�" << endl;
	return a;
}

int main() {
	Simple ob(7);
	cout << "�Լ� ȣ�� �غ�!" << endl;
	SimpleFun(ob).addNum(30).show();
	cout << "�Լ� ȣ�� ��" << endl;
}