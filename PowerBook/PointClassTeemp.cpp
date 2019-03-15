#include "pch.h"
#include "PointClassTemp.h"

template<typename T>
Point<T>::Point(T x, T y) : x(x), y(y)
{}

template <typename TEMP>
void Point<TEMP>::show() const {
	cout << (TEMP)this->x << ", " << (TEMP)this->y << endl;
}