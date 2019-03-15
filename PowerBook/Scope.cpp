#include "pch.h"

int a = 10;

int main() {
	int a = 100;
	a += 5;

	std::cout << a << std::endl;

	::a += 5;

	std::cout << ::a << std::endl;
}