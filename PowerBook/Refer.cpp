#include "pch.h"
using namespace std;

int main() {
	int n = 100;
	int &nr = n;

	nr = 150;

	cout << "n : " << n << " nr : " << nr << endl;
	cout << "*n : " << &n << "*nr : " << &nr << endl;
}