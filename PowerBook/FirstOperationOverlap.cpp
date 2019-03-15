#include "pch.h"
#include <iostream>

using namespace std;

class Point {
private:
	int x, y;

public:
	Point(int x, int y) : x(x), y(y) {}

	void show() const {
		cout << "x : " << x << " y : " << y << endl;
	}

	friend Point operator+(const Point& l, const Point& r);
};

Point operator+(const Point& l, const Point& r) {
	Point pos(l.x + r.x, l.y + r.y);
	return pos;
}

int main() {
	Point pos(3, 4);
	Point pos2(12, 20);
	Point res = pos + pos2;

	pos.show();
	pos2.show();
	res.show();
}