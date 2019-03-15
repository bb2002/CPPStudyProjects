#include "pch.h"
#include <iostream>

int main() {
	double val1;
	std::cout << "첫번째 숫자 입력 : ";
	std::cin >> val1;

	double val2;
	std::cout << "두번째 숫자 입력 : ";
	std::cin >> val2;

	double result = val1 + val2;
	std::cout << "+ 결과 : " << result << std::endl;
}