#include "pch.h"
#include <iostream>
#include "Point.h"

using namespace std;

bool Point::InitMember(int x, int y)
{
	if (x < 0 || y < 0) {
		// - 로 내려갈 수 없습니다.
		cout << "Out of range Exception" << endl;
		return false;
	}

	this->x = x;
	this->y = y;
	return true;
}

bool Point::SetX(int newX)
{
	if (0 >= newX || newX >= 100) {
		cout << "set x is out of range." << endl;
		return false;
	}

	this->x = newX;
	return true;
}

bool Point::SetY(int newY)
{
	if (0 >= newY || newY >= 100) {
		cout << "set y is out of range." << endl;
		return false;
	}

	this->y = newY;
	return true;
}
