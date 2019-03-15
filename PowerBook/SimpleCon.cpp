#include "pch.h"
#include <iostream>

using namespace std;

class SimpleClass {
private:
	int x, y;

public:
	SimpleClass()  {
		x = 0;
		y = 0;
	}

	SimpleClass(int a, int b) {
		x = a;
		y = b;
	}

	void ShowData() {
		cout << x << ", " << y << endl;
	}
};

int main() {
	SimpleClass a;
	a.ShowData();

	SimpleClass b(100, 200);
	b.ShowData();
}