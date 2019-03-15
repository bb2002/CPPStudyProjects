#include "pch.h"
#include <iostream>

using namespace std;

class Person {
private:
	int age;
	char *name;

public:
	Person(int age, const char* name) : age(age) {
		this->name = new char[50];
		strcpy(this->name, name);
	}

	~Person() {
		delete[] name;
	}

	void kiminonamae() const {
		cout << "namaeha " << name << endl;
	}

	void kiminose() const {
		cout << age << "kai desu" << endl;
	}
};

class UnivStudent : public Person {
private:
	char *major;	// 전공 과목

public:
	UnivStudent(const char* name, int age, const char* major) : Person(age, name) {
		this->major = new char[50];
		strcpy(this->major, major);
	}

	void whoami() const {
		kiminonamae();
		kiminose();
		cout << "my major " << major << "desu." << endl;
	}

	~UnivStudent() {
		delete[] major;
	}
};


int main() {
	UnivStudent s1("Ballbot", 22, "철할과");
	UnivStudent s2("Yuuki", 16, "고딩");

	s1.whoami();
	s2.whoami();
}