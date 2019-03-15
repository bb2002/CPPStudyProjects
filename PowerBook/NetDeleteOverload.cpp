#include "pch.h"

using namespace std;

class Point {
private:
	int x, y;

public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	friend ostream& operator<<(ostream& os, const Point& point);

	static void* operator new (size_t size) {
		cout << "operator new : " << size << endl;
		void* addr = malloc(size + 1);
		return addr;
	}

	static void* operator new[] (size_t size) {
		cout << "operator new[] : " << size << endl;
		void* addr = malloc(size + 1);
		return addr;
	}

	static void operator delete(void* addr) {
		cout << "operator delete()" << endl;
		delete addr;
	}

	static void operator delete[](void* addr) {
		cout << "operator delete()[]" << endl;
		delete addr;
	}
};

ostream& operator<<(ostream& os, const Point& point) {
	os << point.x << ", " << point.y << endl;
	return os;
}

int main() {
	Point* ptr = new Point(3, 4);
	cout << *ptr;
	delete ptr;

	Point* ptr2 = new Point[10];
	cout << *ptr2;
	delete[] ptr2;
}