#include "pch.h"
using namespace std;

template<typename T>
class SimpleStatic {
private:
	static T mem;

public:
	void addMem(T num) {
		this->mem += num;
	}

	void showMem() {
		cout << this->mem << endl;
	}
};

template<typename T>
T SimpleStatic<T>::mem = 0;

template<>
long SimpleStatic<long>::mem = 10000;

int main() {
	SimpleStatic<int> obj1;
	SimpleStatic<int> obj2;
	obj1.addMem(10);
	obj2.addMem(20);

	obj1.showMem();
	obj2.showMem();

	SimpleStatic<long> l1;
	SimpleStatic<long> l2;
	l1.addMem(10000);
	l2.addMem(20000);
	l1.showMem();
	l2.showMem();
}