#include "pch.h"
#include <iostream>

int adder(int a = 0, int b = 1);

int main() {
	std::cout << adder() << std::endl;
	std::cout << adder(5) << std::endl;
	std::cout << adder(5,10) << std::endl;
}

int adder(int a, int b) {
	return a + b;
}