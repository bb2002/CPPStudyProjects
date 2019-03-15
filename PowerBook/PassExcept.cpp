#include "pch.h"

int deivde(int a, int b) {
	if (b == 0) {
		throw b;
	}
	else {
		cout << "몫 : " << (a / b) << endl;
	}
}

int main() {
	int a, b;
	cout << "a / b 할거임. : ";
	cin >> a >> b;

	try {
		deivde(a, b);
	}
	catch (int ex) {
		cout << "나누는 수는 : " << ex << "불가능!" << endl;
	}
}