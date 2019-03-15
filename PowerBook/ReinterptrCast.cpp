#include "pch.h"

class Car {
public:
	void showCar() {
		cout << "CAR!!" << endl;
	}
};

class Friend {
public:
	void showFriend() {
		cout << "FRIEND!!" << endl;
	}
};

int main() {
	/*Car* c = new Car();
	Friend* fr = reinterpret_cast<Friend*>(c);
	fr->showFriend();*/

	int num = 0x010203;
	char* ptr = reinterpret_cast<char*>(&num);

	for (int i = 0; i < sizeof(num); i++) {
		cout << static_cast<int>(*(ptr + i)) << endl;
	}
}