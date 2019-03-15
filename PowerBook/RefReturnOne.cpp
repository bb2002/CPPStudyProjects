#include "pch.h"

using namespace std;

int& refReturnOne(int& ref) {
	ref++;
	return ref;
}

int main() {
	int num = -1;
	int num2 = refReturnOne(num);

	num++;
	num2 += 120;

	cout << "num1 : " << num << endl;
	cout << "num2 : " << num2 << endl;
}