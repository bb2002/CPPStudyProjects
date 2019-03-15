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
	Truck* truck1 = static_cast<Truck*>(car1);
	truck1->show();

	Car* car2 = new Car(120);
	Truck* truck2 = static_cast<Truck*>(car2);
	truck2->show();

	double result = static_cast<double>(20) / 3;
	cout << "20/3 : " << result << endl;

	const int num = 20;
	int* ptr = (int*)&num;
	*ptr = 30;
	cout << *ptr << endl;
	cout << "num : " << num << endl;

	float* adr = (float*)ptr;
	cout << *adr << endl;
}