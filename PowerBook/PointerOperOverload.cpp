#include "pch.h"

using namespace std;

class Number {
private:
	int num;

public:
	Number(int n) : num(n) {}

	void show() {
		cout << num << endl;
	}

	Number* operator->() {
		return this;
	}

	Number& operator*() {
		return *this;
	}
};

int main() {
	Number num(20);
	num.show();

	(*num) = 30;
	num.show();
	(*num).show();
}