#include "pch.h"

template <typename T>
T add(T a, T b) {
	cout << "T add(T a, T b)" << endl;
	return a + b;
}

int add(int a, int b) {
	cout << "int add(int a, int b)" << endl;
	return a + b;
}

double add(double a, double b) {
	cout << "double add(double a, double b)" << endl;
	return a + b;
}

int main() {
	cout << add(15, 30) << endl;
	cout << add(15.5734, 30.1354) << endl;
	cout << add<int>(4, 5) << endl;
	cout << add<double>(3.14, 15.95) << endl;
}