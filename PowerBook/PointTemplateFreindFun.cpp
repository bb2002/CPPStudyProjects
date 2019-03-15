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

	friend Point<int> operator+(const Point<int>& a, const Point<int>& b);
	friend ostream& operator<<(ostream& out, const Point<int>& a);
};

Point<int> operator+(const Point<int>& a, const Point<int>& b) {
	return Point<int>(a.x + b.x, a.y + b.y);
}

ostream& operator<<(ostream& out, const Point<int>& a) {
	out << a.x << ", " << a.y << endl;
	return out;
}

int main() {
	Point<int> a(2, 4);
	Point<int> b(3, 5);
	Point<int> c = a + b;

	cout << a << b << c << endl;
}