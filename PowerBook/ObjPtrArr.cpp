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
	Person* p[3];
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++) {
		cout << "�̸� : ";
		cin >> namestr;
		cout << "���� : ";
		cin >> age;
		p[i] = new Person(namestr, age);
	}

	cout << "sizeof : " << sizeof(p) << endl;

	p[0]->show();
	p[1]->show();
	p[2]->show();

	delete p[1];
	delete p[2];

}