#include "pch.h"
#include <iostream>

using namespace std;

class Person {
private:
	char* name;
	int age;

public:
	Person() {
		this->name = nullptr;
		age = 0;
		cout << "person() called." << endl;
	}

	Person(const char* name, int age) {
		this->name = new char[30];
		strcpy(this->name, name);
		this->age = age;
	}

	void show() const {
		cout << "name" << name << endl;
		cout << "age" << age << endl;
	}

	void set(char* a, int b) {
		name = a;
		age = b;
	}

	~Person() {
		delete[] name;
		cout << "freeeeeed!" << endl;
	}
};

int main() {
	Person p[3];
	char namestr[100];
	char* strptr;
	int age, len;

	for (int i = 0; i < 3; i++) {
		cout << "이름 : ";
		cin >> namestr;
		cout << "나이 : ";
		cin >> age;
		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);
		p[i].set(strptr, age);
	}

	p[0].show();
	p[1].show();
	p[2].show();

}