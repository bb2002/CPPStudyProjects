#include "pch.h"

int main() {
	int num = 0;

	try {
		while (1) {
			num++;
			cout << num << "��° �Ҷ� �õ�" << endl;
			new int[10000][10000];
		}
	}
	catch (...) {
		cout << "�Ҵ� ���� =_=" << endl;
	}
}