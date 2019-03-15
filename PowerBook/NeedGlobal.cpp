#include "pch.h"
#include <iostream>

using namespace std;

class SoSimple {
private:
	const static int me = 500;
	static int count;
	int a;

public:
	SoSimple() {
		count++;
		cout << count << "번째 변수 " << endl;
	}

	static void CallMe() {
		cout << "count : " << count << endl;
	}

	static int open;
};

int main() {
	cout << SoSimple::open << "입니다." << endl;
	SoSimple::CallMe();
}

int SoSimple::count = 0;
int SoSimple::open = 500;