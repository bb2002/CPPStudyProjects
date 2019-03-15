#include "pch.h"

using namespace std;

class Car {
private:
	enum
	{
		ID_LEN = 20,
		MAX_SPEED = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};

	char PlayerID[ID_LEN];
	int FuelGauge;
	int CurrentSpeed;

public:
	void Init(const char* id, int fuel);
	void ShowCarSpeed();
	void Accel();
	void Break();

};

void Car::Init(const char* id, int fuel) {
	strcpy(PlayerID, id);
	FuelGauge = fuel;
	CurrentSpeed = 0;
}

void Car::ShowCarSpeed() {
	cout << "소유자 : " << PlayerID << endl;
	cout << "연료량 : " << FuelGauge << "%" << endl;
	cout << "현재속도 : " << CurrentSpeed << "km/h" << endl;
}

void Car::Accel() {
	if (FuelGauge <= 0) {
		return;
	}
	else {
		FuelGauge -= FUEL_STEP;
	}

	if (CurrentSpeed + ACC_STEP >= MAX_SPEED) {
		CurrentSpeed = MAX_SPEED;
		return;
	}

	CurrentSpeed += ACC_STEP;
}

void Car::Break() {
	if (CurrentSpeed < BRK_STEP) {
		CurrentSpeed = 0;
		return;
	}

	CurrentSpeed -= BRK_STEP;
}



int main() {
	Car ballCar;
	ballCar.Init("BallbotCar", 100);
	ballCar.Accel(); ballCar.Accel(); ballCar.Accel();
	ballCar.ShowCarSpeed();
	ballCar.Break();
	ballCar.ShowCarSpeed();

}