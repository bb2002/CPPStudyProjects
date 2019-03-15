#include "pch.h"
#include <iostream>

using namespace std;

class Gem;

class Point {
private:
	int count;

public:
	Point() : count(0) {}

	Gem Add(const Gem&, const Gem&);
	Gem Sub(const Gem&, const Gem&);
	~Point() {
		cout << "op items :" << count << endl;
	}
};

class Gem {
private: 
	int x, y;

public:
	Gem(const int& x, const int& y) : x(x), y(y) {}

	friend Gem Point::Add(const Gem&, const Gem&);
	friend Gem Point::Sub(const Gem&, const Gem&);
	friend void ShowPointPos(const Gem&);
};

Gem Point::Add(const Gem& a, const Gem& b) {
	++count;
	return Gem(a.x + b.x, a.y + b.y);
}

Gem Point::Sub(const Gem& a, const Gem& b) {
	++count;
	return Gem(a.x - b.x, a.y - b.y);
}

int main() {
	Gem g(1, 2);
	Gem h(2, 4);
	Point p;

	ShowPointPos(p.Add(g, h));
	ShowPointPos(p.Sub(h, g));
}

void ShowPointPos(const Gem& a) {
	cout << "x : " << a.x << endl;
	cout << "y : " << a.y << endl;
}

