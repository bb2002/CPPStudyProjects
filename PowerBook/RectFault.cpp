#include "pch.h"
#include<iostream>

using namespace std;

class Point {
public:
	int x, y;
};

class Rect {
public:
	Point upLeft;
	Point rightBottom;

public:
	void ShowRectInfo() {
		cout << "ul " << upLeft.x << ", " << upLeft.y << endl;
		cout << "rb " << rightBottom.x << ", " << rightBottom.y << endl;

	}
};

int main() {
	Point pos1 = { -2, 4 };
	Point pos2 = { 5, 9 };
	Rect rec = { pos2, pos1 };
	rec.ShowRectInfo();
}