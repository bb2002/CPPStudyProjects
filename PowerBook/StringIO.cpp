// PowerBook.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include "pch.h"
#include <iostream>

int main()
{
	char name[100];
	char lang[100];

	std::cout << "�֪Ϊ�٣��ϣ�";
	std::cin >> name;

	std::cout << "�����������ުϣ�";
	std::cin >> lang;

	std::cout << "�� �̸� : " << name << "�Դϴ�.\n";
	std::cout << "���� ���� �ϴ� ����" << lang << "�Դϴ�." << std::endl;
}