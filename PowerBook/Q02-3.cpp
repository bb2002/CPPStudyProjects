#include "pch.h"

typedef struct __Point {
	int xPos;
	int yPos;
} Point;

Point& Add(const Point& a, const Point& b) {
	Point* tmp = new Point;
	tmp->xPos = a.xPos + b.xPos;
	tmp->yPos = a.yPos + b.yPos;

	return *tmp;
}

int main() {
	Point* a = new Point {5, 10};
	Point* b = new Point{ 15, 20 };

	Point& result = Add(*a, *b);
	std::cout << "x : " << result.xPos << ", y : " << result.yPos << std::endl;

	delete a;
	delete b;
	delete &result;
}