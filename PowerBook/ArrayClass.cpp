#include "pch.h"
#include <cstdlib>

using namespace std;

class BoundCheckIntArray {
private:
	int* arr;
	int arrlen;

	BoundCheckIntArray(const BoundCheckIntArray& a) {}
	BoundCheckIntArray& operator=(const BoundCheckIntArray& a) {}

public:
	BoundCheckIntArray(int len) : arrlen(len) {
		arr = new int[len];
	}

	int& operator[] (int idx) const {
		cout << "const!!" << endl;
		if (idx < 0 || idx >= arrlen) {
			cout << "Index out of range" << endl;
			exit(100);
		}

		return arr[idx];
	}

	int& operator[] (int idx) {
		cout << "NOT! const!!" << endl;
		if (idx < 0 || idx >= arrlen) {
			cout << "Index out of range" << endl;
			exit(100);
		}

		return arr[idx];
	}

	int size() const {
		return arrlen;
	}

	~BoundCheckIntArray() {
		delete[] arr;
	}
};

void showAll(const BoundCheckIntArray& a) {
	int len = a.size();

	for (int i = 0; i < len; i++) {
		cout << a[i] << endl;
	}
}

int main() {
	BoundCheckIntArray arr(5);
	for (int i = 0; i < 5; i++) {
		arr[i] = (i + 1) * 11;
	}

	showAll(arr);
}