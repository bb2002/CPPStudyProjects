#include "pch.h"
#include <iostream>

using namespace std;

class Point {
private:
	int xPos, yPos;

public:
	void Init(int x, int y) {
		this->xPos = x;
		this->yPos = y;
	}

	void ShowPointInfo() const {
		cout << xPos << ", " << yPos << endl;
	}

	int getX() { return xPos; }

	int getY() { return yPos; }
};

class Ring {
private:
	Point innerCirclePoint;
	int innerRadius;

	Point outCirclePoint;
	int outRadius;

public:
	void Init(int ix, int iy, int ir, int ox, int oy, int o_r ) {
		this->innerCirclePoint = Point();
		this->innerCirclePoint.Init(ix, iy);
		this->outCirclePoint = Point();
		this->outCirclePoint.Init(ox, oy);
		this->innerRadius = ir;
		this->outRadius = o_r;
	}

	void ShowInfo() {
		cout << "Inner circle info ..." << endl;
		cout << "radius : " << innerRadius << endl;
		cout << "[" << innerCirclePoint.getX() << ", " << innerCirclePoint.getY() << "]" << endl;

		cout << "Outter circle info ..." << endl;
		cout << endl << "radius : " << outRadius << endl;
		cout << "[" << outCirclePoint.getX() << ", " << outCirclePoint.getY() << "]" << endl;
	}
};

int main() {
	Ring ring;
	ring.Init(1,1,4,2,2,9);
	ring.ShowInfo();
}