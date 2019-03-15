#include "pch.h"

void Fun1();
void Fun2();
void Fun3();

int main() {
	try {
		Fun1();
	}
	catch (char ex) {
		cout << "에러코드 : " << ex << endl;
	}
}

void Fun1() {
	cout << "Fun1()" << endl;
	Fun2();
}

void Fun2() {
	cout << "Fun2()" << endl;
	Fun3();
}

void Fun3() {
	cout << "Fun3()" << endl;
	throw - 1;
}