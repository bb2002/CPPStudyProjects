#include "pch.h"
#include "SmartPoint.h"
#include "SmartPoint.cpp"

class Point {
private:
	int x, y;

public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}

	void show() {
		cout << "x : " << x << ", y : " << y << endl;
	}
};

void fun() {
	SmartPoint<Point> aPtr(new Point(5, 10));
	SmartPoint<Point> bPtr(new Point(15, 110));

	aPtr->show();
	bPtr->show();

	aPtr->set(111, 222);
	bPtr->set(222, 333);

	aPtr->show();
	bPtr->show();
}

int main() {

	cout << "MAIN START!" << endl;
	fun();
	cout << "MAIN END!" << endl;
}