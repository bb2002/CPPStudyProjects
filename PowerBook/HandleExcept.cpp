#include "pch.h"

int main() {
	int a, b;
	cout << "a / b �Ұ���. : ";
	cin >> a >> b;

	try {
		if (b == 0) {
			throw b;
		}
		else {
			cout << "�� : " << (a / b) << endl;
			cout << "������ : " << (a % b) << endl;
		}
	}
	catch (int expn) {
		cout << "������ ���� " << b << "�� �ɼ� �����ϴ�." << endl;
	}

	cout << "EOF" << endl;
}