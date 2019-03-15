#include "pch.h"

class Point {
private:
	int x, y;

public:
	Point(int x = 0, int y = 0) : x(x), y(y) {
		cout << "POINT()" << endl;
	}

	Point operator+(const Point& pos) const {
		return Point(pos.x + this->x, pos.y + this->y);
	}

	friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos) {
	os << "x: " << pos.x << " y: " << pos.y << endl;
	return os;
}

class Adder {
public:
	int operator() (const int& a, const int& b) {
		return a + b;
	}

	double operator() (const double& a, const double& b) {
		return a + b;
	}

	Point operator() (const Point& pos1, const Point& pos2) {
		return pos1 + pos2;
	}
};

int main() {
	Adder adder;

	cout << adder(5, 10) << endl;
	cout << adder(10.5, 205.15) << endl;
	cout << adder(Point(5, 10), Point(15, 30)) << endl;
}