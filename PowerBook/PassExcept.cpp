#include "pch.h"

int deivde(int a, int b) {
	if (b == 0) {
		throw b;
	}
	else {
		cout << "�� : " << (a / b) << endl;
	}
}

int main() {
	int a, b;
	cout << "a / b �Ұ���. : ";
	cin >> a >> b;

	try {
		deivde(a, b);
	}
	catch (int ex) {
		cout << "������ ���� : " << ex << "�Ұ���!" << endl;
	}
}