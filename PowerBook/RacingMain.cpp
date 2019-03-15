#include "pch.h"
#include <iostream>
#include "Car.h"

int main() {
	Car car;

	car.InitMembers("MyCar", 50);
	car.Accel(); car.Accel(); car.Accel();
	car.ShowCarStatus();
	car.Break();
	car.ShowCarStatus();
}
