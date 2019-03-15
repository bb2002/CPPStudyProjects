#include "pch.h"
#include <iostream>
#include "Point.h"
#include "Rect.h"

using namespace std;

int main() {
	Point pos1;
	if (!pos1.InitMember(-2, 4)) {
		cout << "�ʱ�ȭ �ȵ�." << endl;
	}
	if (!pos1.InitMember(2, 4)) {
		cout << "��ģ �̰͵� �ȵ�" << endl;
	}

	Point pos2;
	if (!pos2.InitMember(5, 9)) {
		cout << "�ƴ� �̰� �� �ʱ�ȭ �ȵ�?" << endl;
	}

	Rect r;
	if (!r.InitMember(pos2, pos1)) {
		cout << "�׸� �ʱ�ȭ �ȵ� " << endl;
	}

	if (!r.InitMember(pos1, pos2)) {
		cout << "�׸� �ʱ�ȭ �� �ȵ�" << endl;
	}

	r.ShowRectInfo();

}