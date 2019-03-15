#include "pch.h"

using namespace std;

class First {
public:
	virtual void fun() {
		cout << "FIRST!!" << endl;
	}
};

class Second : public First {
public:
	virtual void fun() {
		cout << "SECOND!!!" << endl;
	}
};

class Third : public Second {
public:
	virtual void fun() {
		cout << "THIRD!!!!" << endl;
	}
};

int main() {
	Third* three = new Third();
	Second* sec = three;
	First* first = sec;

	first->fun();
	sec->fun();
	three->fun();

	delete three;
}