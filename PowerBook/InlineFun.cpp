#include "pch.h"

inline int Square(int x) {
	return x * x;
}

int main() {
	std::cout << Square(10) << std::endl;
	std::cout << Square(100) << std::endl;
}