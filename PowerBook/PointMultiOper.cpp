#include "pch.h"

using namespace std;

class Point {
private:
	int x, y;

public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void show() const {
		cout << "x : " << x << ", y : " << y << endl;
	}

	Point operator*(int t) {
		Point pos(x * t, y * t);
		return pos;
	}

	friend Point operator*(int t, Point p);
};

Point operator*(int t, Point p) {
	Point a = Point(t * p.x, t * p.y);
	return a;
}

int main() {
	Point p(1, 2);
	Point cpy;

	cpy = p * 3;
	cpy.show();

	cpy = p * 3 * 2;
	cpy.show();

	cpy = 3 * p;
	cpy.show();
}