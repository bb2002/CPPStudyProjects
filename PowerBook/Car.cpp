#include "pch.h"
#include <iostream>
#include <cstring>
#include "Car.h"

using namespace std;

void Car::InitMembers(const char *id, int fuel) {
	strcpy(PlayerID, id);
	FuelGauge = fuel;
	CurrentSpeed = 0;
}

void Car::Accel()
{
	if (FuelGauge <= 0) {
		return;
	}
	else {
		FuelGauge -= CarConst::FUEL_STEP;
	}

	if (CurrentSpeed + CarConst::FUEL_STEP >= CarConst::MAX_SPD) {
		CurrentSpeed = CarConst::MAX_SPD;
	}

	CurrentSpeed += CarConst::ACC_STEP;

}
