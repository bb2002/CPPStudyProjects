#include "pch.h"

void showStr(char* str) {
	cout << str << endl;
}

void showResult(int& a, int& b) {
	cout << a + b << endl;
	a = 500;
}

int main() {
	const char* name = "Ballbot";
	showStr(const_cast<char*>(name));

	const int a = 10;
	const int b = 20;
	showResult(const_cast<int&>(a), const_cast<int&>(b));

	const_cast<int&>(a) = 100;
	cout << a << endl;
}