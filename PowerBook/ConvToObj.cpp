#include "pch.h"

class Num {
private:
	int num;

public:
	Num(int a = 0) : num(a) {}

	Num& operator=(const Num& other) {
		cout << "operator=" << endl;
		this->num = other.num;
		return *this;
	}

	operator int() {
		return num;
	}

	void show() {
		cout << "num : " << num << endl;
	}
};

int main() {
	Num a(50);
	a = a + 30.0;
	a.show();

}