// PowerBook.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

int main()
{
	char name[100];
	char lang[100];

	std::cout << "君のお名前は？";
	std::cin >> name;

	std::cout << "一番好きな語は？";
	std::cin >> lang;

	std::cout << "니 이름 : " << name << "입니다.\n";
	std::cout << "제일 좋아 하는 언어는" << lang << "입니다." << std::endl;
}