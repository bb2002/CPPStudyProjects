#include "pch.h"

class Point {
private:
	int x, y;

public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos) {
	os << "x: " << pos.x << " y: " << pos.y << endl;
	return os;
}

class PointPointArray {
private:
	Point* arr;
	int arrlen;

	PointPointArray(const PointPointArray& arr) {}
	PointPointArray& operator=(const PointPointArray& other) {}

public:
	PointPointArray(int len) : arrlen(len) {
		arr = new Point[len];
	}

	Point& operator[](int idx) {
		if (idx < 0 || idx > arrlen) {
			cout << "Index out of range" << endl;
			exit(1);
		}

		return arr[idx];
	}

	Point& operator[](int idx) const {
		if (idx < 0 || idx > arrlen) {
			cout << "Index out of range" << endl;
			exit(1);
		}

		return arr[idx];
	}

	int size() const {
		return arrlen;
	}

	~PointPointArray() {
		delete[] this->arr;
	}
};

typedef Point* POINT_PTR;
class PointObjectArray {
private:
	POINT_PTR* arr;
	int arrlen;

	PointObjectArray(const PointObjectArray& arr) {}
	PointObjectArray& operator=(const PointObjectArray& other) {}

public:
	PointObjectArray(int len) : arrlen(len) {
		arr = new POINT_PTR[len];
	}

	POINT_PTR& operator[] (int idx) {
		if (idx < 0 || idx > arrlen) {
			cout << "Index out of range" << endl;
			exit(1);
		}

		return arr[idx];
	}

	POINT_PTR operator[] (int idx) const {
		if (idx < 0 || idx > arrlen) {
			cout << "Index out of range" << endl;
			exit(1);
		}

		return arr[idx];
	}

	int size() const {
		return arrlen;
	}

	~PointObjectArray() {
		delete[] this->arr;
	}
};

int main() {
	PointPointArray arr(3);
	arr[0] = Point(5, 10);
	arr[1] = Point(10, 15);
	arr[2] = Point(15, 20);

	PointObjectArray arr2(3);
	arr2[0] = new Point(5, 10);
	arr2[1] = new Point(15, 100);
	arr2[2] = new Point(25, 200);

	delete arr2[0];
	delete arr2[1];
	delete arr2[2];
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << endl;
	}
}