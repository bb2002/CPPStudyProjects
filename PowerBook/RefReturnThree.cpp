#include "pch.h"

using namespace std;

int refRetFunTwo(int& ref) {
	ref++;
	return ref;
}

int main() {
	//int a = 10;
	//int b = refRetFunTwo(a);

	//a += 1;
	//b += 100;

	//cout << "a : " << a << endl;
	//cout << "b : " << b << endl;

	const int num = 12;
	const int *nptr = &num;
	const int& nptref = *nptr;

	cout << "nptr : " << *nptr << "\nnptref : " << nptref << endl;
}