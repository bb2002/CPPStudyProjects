#include "pch.h"

template <class A, class B>
void show(double num) {
	cout << (A)num << ", " << (B)num << endl;
}

int main() {
	show<char, int>(65);
	show<double, char>(66);
	show<short, double>('C');
}