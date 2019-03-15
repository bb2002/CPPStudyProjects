#include "pch.h"
#include <iostream>

using namespace std;

class Car {
private:
	int gasolineGage;
public:
	Car() : gasolineGage(100) {}

	Car(int a) : gasolineGage(a) {}

	int GetGasGage() {
		return this->gasolineGage;
	}
};

class HybridCar : public Car {
private:
	int elecGage;

public:
	HybridCar() : Car(100), elecGage(100) {}

	HybridCar(int a, int b) : Car(a), elecGage(b) {}

	int GetElecGage() {
		return this->elecGage;
	}
};

class HybrindWaterCar : public HybridCar {
private:
	int waterGage;

public:
	HybrindWaterCar() : HybridCar(100, 100), waterGage(100) {}

	HybrindWaterCar(int a, int b, int c) : HybridCar(a, b), waterGage(c) {}

	void show() {
		cout << "잔여 가솔린 : " << GetGasGage() << endl;
		cout << "잔여 전기 : " << GetElecGage() << endl;
		cout << "잔여 물 " << waterGage << endl;
	}
};

int main() {
	cout << "하이부리도 와타 카 차 " << endl;
	HybrindWaterCar(70, 10, 90).show();
}