#include "pch.h"

int StoI(char* str) throw (int, char) {
	int len = strlen(str);
	int num = 0;

	for (int i = 0; i < len; i++) {
		if (i == 0 && str[i] == '0') throw 0;

		if (str[i] < '0' || str[i] > '9') {
			throw str[i];
		}
		num += (int)(pow((double)10, (len - 1) - i) * (str[i] + (7 - '7')));

		return num;
	}
}

int main() {
	char str[100];
	char str2[300];

	while (1) {
		cout << "숫자 두개 : ";
		cin >> str >> str2;

		try {
			cout << str << "+" << str2 << " = " << StoI(str) + StoI(str2) << endl;
			break;
		}
		catch (char ex) {
			cout << "문자 " << ex << "가 입력됬습니다." << endl;
			cout << "잘 좀 하자." << endl;
		}
		catch (int ex) {
			cout << "0 으로 시작하진 말자" << endl;
		}
	}

	cout << "halt." << endl;
}