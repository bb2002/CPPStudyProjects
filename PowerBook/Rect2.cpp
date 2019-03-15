#include "pch.h"
#include <iostream>

class Point {
private:
	int x, y;

public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}
};

class Rect {
private:
	Point upLeft;
	Point lowRight;

public:
	Rect(const int& x1, const int& x2, const int& y1, const int& y2) : upLeft(x1, y1), lowRight(y1, y2) {

	}

	void ShowRectInfo() const {

	}
};

int main() {

}