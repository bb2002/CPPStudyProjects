#include "pch.h"

using namespace std;

//class Data {
//private:
//	int data;
//
//public:
//	Data(int a) : data(a) {}
//
//	void show() {
//		cout << "DATA : " << data << endl;
//	}
//
//	void add(int a) {
//		data += a;
//	}
//};

struct Data {
	int data;

	void(*show)(Data*);

	void(*add)(Data*, int a);
};

void show(Data* d) {
	cout << "DATA : " << d->data;
}

void add(Data* d, int a) {
	d->data += a;
}

int main() {
	Data obj1 = { 15, show, add };
	Data obj2 = { 30, show, add };

	obj1.add(&obj1, 15);
	obj2.add(&obj2, 30);

	obj1.show(&obj1);
	obj2.show(&obj2);
}