#include "pch.h"
#include <iostream>

using namespace std;

class Temp {
private:
	int num;

public:
	Temp(int a) : num(a) {}

	~Temp() {
		cout << "destory odjb!!!!" << num << endl;
	}

	void show() {
		cout << "mynumis " << num << endl;
	}
};

int main() {
	Temp(100);
	cout << "************** ager make!!!!" << endl << endl;
	Temp(200).show();
	cout << "************** after make!!" << endl << endl;

	const Temp &ref = Temp(300);
	cout << "eof main" << endl << endl;
}