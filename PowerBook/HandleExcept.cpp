#include "pch.h"

int main() {
	int a, b;
	cout << "a / b 할거임. : ";
	cin >> a >> b;

	try {
		if (b == 0) {
			throw b;
		}
		else {
			cout << "몫 : " << (a / b) << endl;
			cout << "나무지 : " << (a % b) << endl;
		}
	}
	catch (int expn) {
		cout << "나누는 수는 " << b << "가 될수 없습니다." << endl;
	}

	cout << "EOF" << endl;
}