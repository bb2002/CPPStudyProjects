#include "pch.h"
#include <iostream>

using namespace std;

class Simple {
private:
	int num1, num2;

public:
	Simple(int a, int b) : num1(a), num2(b) {

	}

	explicit Simple(const Simple& a) : num1(a.num1), num2(a.num2) {
		cout << "called simple(simple& a) !!!!" << endl;
	}

	void show() {
		cout << "1 " << num1 << " 2 " << num2 << endl;
	}
};

int main() {
	Simple a(10, 15);
	cout << "���� �� �ʱ�ȭ ���� " << endl;
	Simple b(a);
	cout << "�ʱ�ȭ ��!" << endl;
	b.show();
}