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

	friend Point& operator++(Point& a);
	friend const Point& operator++(Point& a, int);
};

Point& operator++(Point& a) {
	cout << "���� ���� " << endl;
	a.x++;
	a.y++;
	return a;
}

const Point& operator++(Point& a, int) {
	cout << "���� ���� " << endl;
	a.x++;
	a.y++;
	return a;
}

int main() {
	Point a(15, 30);
	a++;
	++a;
}