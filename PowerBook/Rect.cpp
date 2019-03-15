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
	cout << "�� ��� : " << upLeft.GetX() << ", " << upLeft.GetY() << endl;
	cout << "�� �ϴ� : " << lowRight.GetX() << ", " << lowRight.GetY() << endl;
}
