#include "pch.h"
using namespace std;

template<typename T>
void showStatic() {
	static T a = 0;
	a += 1;
	cout << a << endl;
}

int main() {
	showStatic<int>();
	showStatic<int>();
	showStatic<int>();

	cout << endl << endl;

	showStatic<double>();
	showStatic<double>();
	showStatic<double>();
	showStatic<double>();

	cout << endl << endl;
}