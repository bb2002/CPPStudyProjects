#include "pch.h"
#include "PointClassTemp.h"
#include "PointClassTeemp.cpp"

int main() {
	Point<int> a(5, 10);
	a.show();

	Point<double> b(3.14, 15.92);
	b.show();

	Point<char> c('A', 'a');
	c.show();
}