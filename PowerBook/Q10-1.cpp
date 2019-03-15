#include "pch.h"

using namespace std;

class Point {
private:
	int x, y;

public:
	Point(int x, int y) : x(x), y(y) {}

	void show() const {
		cout << "x : " << x << " y : " << y << endl;
	}

	Point& operator+=(const Point& r) {
		this->x += r.x;
		this->y += r.y;
		return *this;
	}

	Point& operator-=(const Point& r) {
		this->x -= r.x;
		this->y -= r.y;
		return *this;
	}

	void show(char TAG) {
		cout << TAG << " | x : " << x << ", " << "y : " << y << endl << endl;
	}

	Point& operator++() {
		this->x++;
		this->y++;
		return *this;
	}

	friend Point operator+(const Point& l, const Point& r);
	friend Point operator-(const Point& l, const Point& r);
	friend bool operator==(const Point& l, const Point& r);
	friend bool operator!=(const Point& l, const Point& r);
	friend Point& operator--(Point& ref);
};

Point operator+(const Point& l, const Point& r) {
	return Point(l.x + r.x, l.y + r.y);
}

Point operator-(const Point& l, const Point& r) {
	return Point(l.x - r.x, l.y - r.y);
}

bool operator==(const Point& l, const Point& r) {
	return (l.x == r.x) && (l.y == r.y);
}

bool operator!=(const Point& l, const Point& r) {
	return !((l.x == r.x) && (l.y == r.y));
}

Point& operator--(Point& ref) {
	ref.x--;
	ref.y--;
	return ref;
}

int main() {
	Point a(10, 10);
	Point b(20, 20);

	a += b;		// 30, 30
	a.show('a'); b.show('b');

	a -= b;		// 10, 10
	a.show('a'); b.show('b');

	Point c = a + b;	// 30, 30
	c.show('c');

	c = c - a;		// 20, 20
	c.show('c');

	cout << (a == b) << endl;	// false
	cout << (a != b) << endl;	// true 

	++a;
	a.show('a');

	--b;
	b.show('b');
}