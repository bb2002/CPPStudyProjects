#pragma once
#include <iostream>
class FruitSeller {
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	FruitSeller(int p, int n, int m) {
		APPLE_PRICE = p;
		numOfApples = n;
		myMoney = m;
	}

	int SaleApple(int m) {
		int num = m / APPLE_PRICE;
		numOfApples -= num;
		myMoney += m;
		return num;
	}

	void ShowSalesResult() {
		using namespace std;
		cout << "남은 사과 : " << numOfApples << endl;
		cout << "판매 수익 : " << myMoney << endl;
	}
};