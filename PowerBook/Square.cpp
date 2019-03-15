#include "pch.h"
#include <iostream>

using namespace std;

class Rect {
private:
	int width, height;

public:
	Rect(int width, int height) : width(width), height(height) {

	}

	void show() const {
		cout << "¸éÀû : " << width * height << endl;
	}
};

class Square : public Rect {
public:
	Square(int ban) : Rect(ban, ban) {}
};

int main() {
	Rect(4, 3).show();
	Square(7).show();
}