#include "pch.h"
#include "TemplateArray.h"
#include "TemplateArray.cpp"

class Point {
private:
	int x, y;

public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void show() const;

	friend ostream& operator<<(ostream& out, const Point& point);
};

ostream& operator<<(ostream& out, const Point& point) {
	cout << "POINT x : " << point.x << ", POINT y : " << point.y << endl;
	return out;
}


int main() {
	BoundCheckArray<int> a(5);
	a[0] = 5;
	a[1] = 215;
	a[2] = 23575;
	a[3] = 5567;
	a[4] = 554;
	a.show();

	BoundCheckArray<Point> b(2);
	b[0] = Point(5, 10);
	b[1] = Point(10, 15);
	b.show();

	BoundCheckArray<Point*> c(3);
	c[0] = new Point(5, 10);
	c[1] = new Point(25, 100);
	c[2] = new Point(55, 1000);

	for (int i = 0; i < 3; i++) {
		cout << *c[i] << endl;
	}
}