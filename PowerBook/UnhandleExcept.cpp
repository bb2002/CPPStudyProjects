#include "pch.h"

int main() {
	int a, b;
	cout << "a / b �Ұ���. : ";
	cin >> a >> b;

	if (b == 0) {
		cout << "b 0 �̸� ������" << endl;
	}
	else {
		cout << "�� : " << (a / b) << endl;
		cout << "������ : " << (a % b) << endl;
	}
}