#include "pch.h"
#include <iostream>

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap(char& a, char& b) {
	char tmp = a;
	a = b;
	b = tmp;
}

void swap(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 10, b = 20;
	swap(a, b);
	std::cout << a << "|" << b << std::endl;

	char c = 'A', d = 'B';
	swap(c, d);
	std::cout << c << "|" << d << std::endl;

	double e = 3.14, f = 3.15;
	swap(e, f);
	std::cout << e << "|" << f << std::endl;
}