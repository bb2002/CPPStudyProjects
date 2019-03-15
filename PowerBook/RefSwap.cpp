#include "pch.h"

using namespace std;

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void q1_1(int& a) {
	a++;
}

void q1_2(int& a) {
	a *= -1;
}

void ptrSwap(int* a, int* b) {
	int *tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 10;
	int b = 20;
	int* ap = &a;
	int* bp = &b;
	swap(a, b);

	cout << a << " | " << b << endl;

	cout << "BEFORE : " << ap << ", " << bp << endl;
	ptrSwap(ap, bp);
	cout << "AFTER : " << ap << ", " << bp << endl;
}