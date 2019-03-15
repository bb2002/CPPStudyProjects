#include "pch.h"
#include <iostream>
#include "Point.h"
#include "Rect.h"

using namespace std;

int main() {
	Point pos1;
	if (!pos1.InitMember(-2, 4)) {
		cout << "초기화 안됨." << endl;
	}
	if (!pos1.InitMember(2, 4)) {
		cout << "미친 이것도 안됨" << endl;
	}

	Point pos2;
	if (!pos2.InitMember(5, 9)) {
		cout << "아니 이건 왜 초기화 안됨?" << endl;
	}

	Rect r;
	if (!r.InitMember(pos2, pos1)) {
		cout << "네모 초기화 안됨 " << endl;
	}

	if (!r.InitMember(pos1, pos2)) {
		cout << "네모 초기화 또 안됨" << endl;
	}

	r.ShowRectInfo();

}