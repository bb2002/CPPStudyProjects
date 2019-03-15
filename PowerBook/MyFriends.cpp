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
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
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
		cout << "주소 : " << addr << endl;
		cout << "폰 : " << phone << endl;
	}
};

int main() {
	MyFriendDetail f = MyFriendDetail("Takami chika", 16, "누마즈시 우치우라 현", "01-4521-3337");
	f.showDetail();
}