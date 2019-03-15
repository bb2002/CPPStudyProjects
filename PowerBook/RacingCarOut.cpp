#include "pch.h"

using namespace std;

struct Car {
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

	inline void ShowCarSpeed();
	inline void Accel();
	inline void Break();

};

void Car::ShowCarSpeed() {
	cout << "소유자 : " << PlayerID << endl;
	cout << "연료량 : " << FuelGauge << "%" << endl;
	cout << "현재속도 : " << CurrentSpeed << endl;
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
	Car car1 = { "BallbotCar", 100, 0 };
	Car car2 = { "YouCar", 100, 0 };

	car1.Accel();
	car1.Accel();
	car1.Accel();
	car1.ShowCarSpeed();
	car1.Break();
	car1.ShowCarSpeed();

	car2.Accel();
	car2.Break();
	car2.ShowCarSpeed();
}