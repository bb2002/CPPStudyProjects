#include "pch.h"
#include <iostream>

using namespace std;

class Person {
private:
	char* name;
	int age;

public:
	Person(const char* name, int age) : age(age) {
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}

	Person(const Person& other) : age(other.age) {
		this->name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
	}

	void show() const {
		cout << "�̸� : " << this->name << endl;
		cout << "���� : " << this->age << endl;
	}



	~Person() {
		delete[] name;
		cout << "called DESTRCTOR!!!!" << endl;
	}
};

int main() {
	Person m1("�ڿ��ī ȣ��ī", 16);
	Person m2 = m1;
	m1.show();
	m2.show();
}