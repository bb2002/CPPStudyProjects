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
	Car* car1 = new Truck(80, 200);
	Truck* truck1 = dynamic_cast<Truck*>(car1);
	truck1->show();

	Car* car2 = new Car(120);
	Truck* truck2 = dynamic_cast<Truck*>(car2);
	truck2->show();

	Truck* truck3 = new Truck(100, 200);
	Car* car3 = dynamic_cast<Car*>(truck3);
	car3->show();
}