#include "pch.h"
#include<iostream>
#include "Rect.h"

using namespace std;

Rect::Rect(const Point & ul, const Point & lr)
{
	if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()) {
		cout << "Error. Out of range" << endl;
	}

	this->upLeft = ul;
	this->lowRight = lr;
}

void Rect::ShowRectInfo() const
{
	cout << "좌 상당 : " << upLeft.GetX() << ", " << upLeft.GetY() << endl;
	cout << "우 하단 : " << lowRight.GetX() << ", " << lowRight.GetY() << endl;
}
