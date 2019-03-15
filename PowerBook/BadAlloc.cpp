#include "pch.h"

int main() {
	int num = 0;

	try {
		while (1) {
			num++;
			cout << num << "번째 할땅 시도" << endl;
			new int[10000][10000];
		}
	}
	catch (...) {
		cout << "할당 실패 =_=" << endl;
	}
}