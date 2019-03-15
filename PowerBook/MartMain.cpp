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

	cout << "판매자 : " << endl;
	seller.ShowSalesResult();

	cout << "구매자 : " << endl;
	buyer.ShowResult();
}