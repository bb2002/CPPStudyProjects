#pragma once
template <typename T>
class Point {
private:
	T x, y;

public:
	Point(T x = 0, T y = 0);

	void show() const;
};
