#include "pch.h"
#include <string>

int main() {
	string str1 = "I Like!";
	string str2 = "I LIKE!";
	string str3 = str1 + str2;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2;
	if (str1 == str3) {
		cout << " == " << endl;
	}
	else {
		cout << "!=" << endl;
	}

	string str4;
	cout << "���ڿ� �Է� : ";
	cin >> str4;
	cout << "�Է� : " << str4 << endl;
}