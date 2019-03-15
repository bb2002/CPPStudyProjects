#include "pch.h"

class First {
private:
	int x, y;

public:
	First(int x = 0, int y = 0) : x(x), y(y) {}

	void show() {
		cout << "x : " << x << " y : " << y << endl;
	}

	First& operator=(const First& ref) {
		this->x = ref.x;
		this->y = ref.y;
		cout << "First& operator=()" << endl;
		return *this;
	}
};

class Second : public First {
private:
	int z, time;

public:
	Second(int x, int y, int z, int time) : First(x, y), z(z), time(time) {}

	void show() {
		First::show();
		cout << "z : " << z << " time : " << time << endl;
	}

	Second& operator=(const Second& other) {
		First::operator=(other);

		this->z = other.z;
		this->time = other.time;
		cout << "Second& operator=()" << endl;

		return *this;
	}
};

int main() {
	Second sSrc(50, 50, 100, 10);
	Second sCpy(0, 0, 0, 0);

	sCpy = sSrc;
	sCpy.show();
}