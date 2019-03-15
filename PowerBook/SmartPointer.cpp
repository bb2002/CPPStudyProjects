#include "pch.h"

class Point {
private:
	int x, y;

public:
	Point(int x = 0, int y = 0) : x(x), y(y) {
		cout << "POINT()" << endl;
	}

	~Point() {
		cout << "POINT~" << endl;
	}

	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}

	friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos) {
	os << "x: " << pos.x << " y: " << pos.y << endl;
	return os;
}

class SmartPtr
{
private:
	Point* posptr;

public:
	SmartPtr(Point* ptr) : posptr(ptr) {

	}

	Point& operator*() const {
		return *posptr;
	}

	Point* operator->() const {
		return posptr;
	}

	~SmartPtr() {
		delete posptr;
	}
};

void fun() {
	SmartPtr ptr1(new Point(5, 10));
	SmartPtr ptr2(new Point(15, 110));
	SmartPtr ptr3(new Point(25, 210));

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;
	cout << *ptr3 << endl;

	ptr1->set(1, 2);
	ptr2->set(2, 34);
	ptr3->set(5, 6);

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;
	cout << *ptr3 << endl;

	Point * noooo = new Point(5, 10);
	cout << "noooo" << endl;
	cout << *noooo << endl;
}

int main() {
	fun();
	cout << "main end" << endl;
}