#include "pch.h"

template<typename T>
class Point {
private:
	T x, y;

public:
	Point(T x = 0, T y = 0) : x(x), y(y) {}

	void show() const {
		cout << x << ", " << y << endl;
	}

	friend Point<int> operator+(const Point<int> a, const Point<int>& b);
	friend ostream& operator<<(ostream& os, const Point& pos);
};

Point<int> operator+(const Point<int> a, const Point<int>& b) {
	return Point<int>(a.x + b.x, a.y + b.y);
}