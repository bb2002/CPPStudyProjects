#include "pch.h"
using namespace std;

template <typename T = int, int len = 10>
class SimpleArr {
private:
	T arr[len];

public:
	T& operator[] (int idx) {
		return arr[idx];
	}

	SimpleArr<T, len>& operator=(const SimpleArr<T, len>& ref) {
		for (int i = 0; i < len; i++) {
			arr[i] = ref.arr[i];
		}

		return *this;
	}
};

int main() {
	SimpleArr<> i5arr;
	for (int i = 0; i < 5; i++) {
		i5arr[i] = i * 10;
	}

	SimpleArr<> i5arr2;
	i5arr2 = i5arr;
	for (int i = 0; i < 5; i++) {
		cout << i5arr2[i] << endl;
	}

	SimpleArr<int, 7> i7arr;
	for (int i = 0; i < 7; i++) {
		i7arr[i] = i * 10;
	}
	SimpleArr<int, 7> i7arr2;
	i7arr = i7arr2;
	for (int i = 0; i < 7; i++) {
		cout << i7arr2[i] << endl;
	}

}