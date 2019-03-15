#include "pch.h"
#include <iostream>
#include "FruitBuyer.h"
#include "FruitSeller.h"

int main() {
	using namespace std;
	FruitBuyer buyer;
	FruitSeller seller;

	seller.InitMember(1000, 20, 0);
	buyer.Init(5000);
	buyer.Buy(seller, 2000);

	cout << "�Ǹ��� : " << endl;
	seller.ShowSalesResult();

	cout << "������ : " << endl;
	buyer.ShowResult();
}