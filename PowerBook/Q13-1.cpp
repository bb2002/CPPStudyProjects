#include "pch.h"

class Point {
private:
	int x, y;

public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void show() const {
		cout << "x" << x << "y" << y << endl;
	}
};

template<class T>
void b_swap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template<class T>
int sumArray(T arr[], int len) {
	int sum = 0;
	for (int i = 0; i < len; i++) {
		sum += arr[i];
	}

	return sum;
}

int main() {
	int a = 5, b = 10;
	b_swap(a, b);
	cout << "a :" << a << ", " << b << endl;

	Point c(5, 10);
	Point d(15, 30);
	b_swap(c, d);
	cout << "c :";
	c.show();
	cout << "d :";
	d.show();

	char arr[] = { 'A', 'b', 'วั', 'D' };
	cout << sumArray(arr, 6) << endl;
}