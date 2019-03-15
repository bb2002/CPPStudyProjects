#include "pch.h"

class Point {
private:
	int x, y;

public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	friend ostream& operator<<(ostream& out, const Point& point);
};

ostream& operator<<(ostream& out, const Point& point) {
	out << point.x << ", " << point.y << endl;
	return out;
}

class PointArray {
private:
	Point* arr;
	int len;

public:
	PointArray(int size) : len(size) {
		this->arr = new Point[size];
	}

	Point& operator[](int size) {
		return arr[size];
	}

	Point& operator[](int size) const {
		return arr[size];
	}

	int size() const {
		return len;
	}
};

int main() {
	PointArray arr(5);
	
	for (int i = 0; i < arr.size(); i++) {
		arr[i] = Point(10 * i, 20 * i);
	}

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << endl;
	}
}