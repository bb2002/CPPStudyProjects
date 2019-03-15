#include "pch.h"
#include <iostream>

using namespace std;

void counter() {
	static int cnt;
	cnt++;
	cout << "cnt : " << cnt << endl;
}

int main() {
	counter();
	counter();
	counter();
	counter();
	counter();

}