#include "pch.h"

using namespace std;

int main() {
	int arr[3] = { 1, 3, 5 };
	int &a1 = arr[0];
	int &a2 = arr[1];
	int &a3 = arr[2];

	a1 = 10;
	a2 = 20;
	a3 = 30;

	cout << a1 << endl;
	cout << a2 << endl;
	cout << a3 << endl;
}