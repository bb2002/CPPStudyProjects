#include "pch.h"

using namespace std;

void hello() {
	cout << "Hello" << endl;
}

void ohayo() {
	cout << "¿ÀÇÏ¿ä" << endl;
}

int calc(int a, int b) {
	return a + b;
}

void caller(int(*cc)(int, int)) {
	cout << cc(15, 30) << endl;
}

int main() {
	int(*cc)(int, int) = calc;
	caller(calc);
}