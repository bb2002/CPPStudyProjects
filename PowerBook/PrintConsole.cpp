#include "pch.h"

class Point {
private:
	int x, y;

public:
	Point(int x, int y) : x(x), y(y) {}
	Point() : x(0), y(0) {}

	friend ostream& operator<<(ostream& cout, const Point& p);
	friend istream& operator>>(istream& in, Point& p);
};

ostream& operator<<(ostream& cout, const Point& p) {
	cout << p.x << ", " << p.y;
	return cout;
}

istream& operator>>(istream& in, Point& p) {
	in >> p.x >> p.y;
	return in;
}

int main() {
	Point p;
	cout << "점 사이 xy 입력 : ";
	cin >> p;
	cout << p;

	Point p2;
	cout << "점 사이 xy 입력 : ";
	cin >> p2;
	cout << p2;
}