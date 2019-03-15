// PowerBook.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

int main()
{
	/*int result = 0;
	for (int i = 0; i < 5; i++) {
		std::cout << i + 1 << "번째 정수 입력 : ";

		int a;
		std::cin >> a;
		result += a;
	}

	std::cout << "합계 : " << result << std::endl;*/

	/////////////////////////////////////////////////

	//char number[20];
	//std::cin >> number;
	//std::cout << number << std::endl;

	/////////////////////////////////////////////////

	/*int gugu;
	std::cin >> gugu;

	for (int i = 1; i <= 9; i++) {
		std::cout << gugu << "x" << i << " = " << gugu * i << std::endl;
	}*/

	/////////////////////////////////////////////////

	while (1) {
		int data;
		std::cout << "판매 금액을 만원 단위로 입력 (-1 to end): ";
		std::cin >> data;

		if (data == -1) break;

		std::cout << "님 급여 : " << (50 + data * 0.12) << std::endl;
	}
}