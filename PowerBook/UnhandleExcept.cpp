#include "pch.h"

int main() {
	int a, b;
	cout << "a / b 할거임. : ";
	cin >> a >> b;

	if (b == 0) {
		cout << "b 0 이면 터진다" << endl;
	}
	else {
		cout << "몫 : " << (a / b) << endl;
		cout << "나무지 : " << (a % b) << endl;
	}
}