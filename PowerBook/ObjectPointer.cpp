#include "pch.h"

using namespace std;

class Person {
public:
	void sleep() {
		cout << "SLEEP" << endl;
	}
};

class Student : public Person {
public:
	void study() {
		cout << "STUDY!" << endl;
	}
};

class PartTimeStudent : public Student {
public:
	void work() {
		cout << "WORK!" << endl;
	}
};

int main() {
	Person* ptr = new Student();
	Person* ptr2 = new PartTimeStudent();
	Student* ptr3 = new PartTimeStudent();

	ptr->sleep();
	ptr2->sleep();
	ptr3->study();

	delete ptr;
	delete ptr2;
	delete ptr3;
}