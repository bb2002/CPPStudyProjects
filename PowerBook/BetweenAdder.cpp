// PowerBook.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

int main()
{
	int val1, val2;
	int result = 0;

	std::cout << "두개의 숫자 입력 : ";
	std::cin >> val1 >> val2;

	if (val1 < val2) {
		for (int i = val1; i < val2; i++) {
			result += i;
		}
	}
	else {
		for (int i = val2; i < val1; i++) {
			result += i;
		}
	}

	std::cout << "두 수의 정수 합 : " << result << std::endl;
}