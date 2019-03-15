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
			std::cout << "미친 0원 아래는 어떻게 내려고." << std::endl;
		}
	}

	void ShowResult() const {
		using namespace std;
		cout << "잔액 : " << MyMoney << endl;
		cout << "사과 갯수 : " << NumOfApples << endl;
	}
};