#pragma once
#include "Point.h"

class Rect {
private:
	Point upLeft;
	Point lowRight;

public:
	Rect(const Point& ul, const Point& lr);
	void ShowRectInfo() const;
};