#include "pch.h"

template<typename T1, typename T2>
class MySimple {
public:
	void who() {
		cout << "size of T1 : " << sizeof(T1) << endl;
		cout << "size of T2 : " << sizeof(T2) << endl;
		cout << "template<typename T1, typename T2>" << endl;
	}
};

template<>
class MySimple<int, double> {
public:
	void who() {
		cout << "size of T1 : " << sizeof(int) << endl;
		cout << "size of T2 : " << sizeof(double) << endl;
		cout << "template<>" << endl;
	}
};

template<typename T1>
class MySimple<T1, int> {
public:
	void who() {
		cout << "size of T1 : " << sizeof(T1) << endl;
		cout << "size of T2 : " << sizeof(int) << endl;
		cout << "template<typename T1>" << endl;
	}
};

int main() {
	MySimple<char, double> a;
	MySimple<__int64, std::string> b;
	MySimple<int, double> c;

	a.who();
	b.who();
	c.who();

}