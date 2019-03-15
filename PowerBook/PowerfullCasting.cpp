#include "pch.h"

class Car {
private:
	int fuel;

public:
	Car(int fuel) : fuel(fuel) {

	}

	virtual void show() {
		cout << "잔여 : " << fuel << endl;
	}
};

class Truck : public Car {
private:
	int maxWeight;

public:
	Truck(int fuel, int weight) : Car(fuel), maxWeight(weight) {

	}

	void show() {
		Car::show();
		cout << "최대 용량 : " << maxWeight << endl;
	}
};

int main() {
	Car* car1 = new Truck(100, 2000);
	Truck* truck1 = (Truck*)car1;
	truck1->show();

	cout << endl;

	Car* car2 = new Car(50);
	Truck* truck2 = (Truck*)car2;
	truck2->show();
}