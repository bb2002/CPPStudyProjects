#pragma once
#include <iostream>
#include "FruitSeller.h"

class FruitBuyer {
	int MyMoney;
	int NumOfApples;

public:
	void Init(int money) {
		MyMoney = money;
		NumOfApples = 0;
	}

	void Buy(FruitSeller& seller, int money) {
		if (money < 0) {
			NumOfApples += seller.SaleApple(money);
			MyMoney -= money;
		}
		else {
			std::cout << "��ģ 0�� �Ʒ��� ��� ������." << std::endl;
		}
	}

	void ShowResult() const {
		using namespace std;
		cout << "�ܾ� : " << MyMoney << endl;
		cout << "��� ���� : " << NumOfApples << endl;
	}
};