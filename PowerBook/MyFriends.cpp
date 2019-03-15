#include "pch.h"
#include <iostream>

using namespace std;

class MyFriendInfo {
private:
	char* name;
	int age;

public:
	MyFriendInfo(const char* name, int age) : age(age) {
		this->name = new char[50];
		strcpy(this->name, name);
	}

	~MyFriendInfo() {
		delete[] name;
	}

	void showInfo() const {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
};

class MyFriendDetail : public MyFriendInfo {
private:
	char* addr;
	char* phone;

public:
	MyFriendDetail(const char* name, int age, const char* addr, const char* phone) : MyFriendInfo(name, age) {
		this->addr = new char[50];
		this->phone = new char[50];

		strcpy(this->addr, addr);
		strcpy(this->phone, phone);
	}

	~MyFriendDetail() {
		delete[] addr;
		delete[] phone;
	}

	void showDetail() const {
		showInfo();
		cout << "�ּ� : " << addr << endl;
		cout << "�� : " << phone << endl;
	}
};

int main() {
	MyFriendDetail f = MyFriendDetail("Takami chika", 16, "������� ��ġ��� ��", "01-4521-3337");
	f.showDetail();
}