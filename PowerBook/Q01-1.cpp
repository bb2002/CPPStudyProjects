// PowerBook.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include "pch.h"
#include <iostream>

int main()
{
	/*int result = 0;
	for (int i = 0; i < 5; i++) {
		std::cout << i + 1 << "��° ���� �Է� : ";

		int a;
		std::cin >> a;
		result += a;
	}

	std::cout << "�հ� : " << result << std::endl;*/

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
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է� (-1 to end): ";
		std::cin >> data;

		if (data == -1) break;

		std::cout << "�� �޿� : " << (50 + data * 0.12) << std::endl;
	}
}