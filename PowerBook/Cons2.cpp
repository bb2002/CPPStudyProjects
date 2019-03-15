#include "pch.h"
#include <iostream>

using namespace std;

class Simple {
private:
	int x, y;

public:
	Simple(int a = 0, int b = 1) {
		x = a;
		y = b;
	}

	void ShowData() {
		cout << x << ", " << y << endl;
	}
};

int main() {
	Simple sc1();
	Simple mysc = sc1();
	mysc.ShowData();

}

Simple sc1() {
	Simple s(20, 30);
	return s;
}