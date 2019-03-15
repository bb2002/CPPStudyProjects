#include "pch.h"
#include <iostream>

using namespace std;

class Employee {
private:
	char name[100];

public:
	Employee(const char* name) {
		strcpy(this->name, name);
	}

	void showName() const {
		cout << "name : " << name << endl;
	}
};

class EmployeeHandler {
private:
	Employee* empList[50];
	int empNum;

public:
	EmployeeHandler() : empNum(0) {}

	void AddEmployee(Employee* worker) {
		empList[empNum++] = worker;
	}

	void ShowAllSalaryInfo() const {
		/*for (int i = 0; i < empNum; i++) {
			empList[i]->showSalaryInfo();
		}*/
	}

	void showTotalSalary() const {
		int sum = 0;
		/*for (int i = 0; i < empNum; i++) {
			sum += empList[i]->getPay();
		}*/

		cout << "salary sum : " << sum << endl;
	}

	~EmployeeHandler() {
		for (int i = 0; i < empNum; i++) {
			delete empList[i];
		}
	}
};

class TemporaryWorker : public Employee {
private:
	int workTime;
	int payPerHour;

public:
	TemporaryWorker(const char* name, int pay) : Employee(name), workTime(0), payPerHour(pay) {}

	void addWorkTime(int time) {
		workTime += time;
	}

	int getPay() const {
		return workTime * payPerHour;
	}

	void showSalaryInfo() const {
		showName();
		cout << "salary : " << getPay() << endl << endl;
	}
};

class PermanentWorker : public Employee {
private:
	int salary;

public:
	PermanentWorker(const char* name, int money) : Employee(name), salary(money) {

	}

	int getPay() const {
		return salary;
	}

	void showSalaryInfo() const {
		showName();
		cout << "salary : " << getPay() << endl;
	}
};

class SalesWorker : public PermanentWorker {
private:
	int salesResult;
	double bonusRatio;

public:
	SalesWorker(const char* name, int money, double ratio) : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {}

	void addSalesResult(int val) {
		salesResult += val;
	}

	int getPay() const {
		return PermanentWorker::getPay() + (int)(salesResult * bonusRatio);
	}

	void showSalaryInfo() const {
		showName();
		cout << "salary : " << getPay() << endl;
	}
};

int main() {
	EmployeeHandler handler;

	handler.AddEmployee(new PermanentWorker("Ballbot", 1500));
	handler.AddEmployee(new PermanentWorker("Yuuki", 3000));
	handler.AddEmployee(new PermanentWorker("Chika", 8000));

	// 임시직
	TemporaryWorker* baito = new TemporaryWorker("Kizuna ai", 700);
	baito->addWorkTime(5);
	handler.AddEmployee(baito);

	// 영업직
	SalesWorker* seller = new SalesWorker("Kanan", 1000, 0.1);
	seller->addSalesResult(7000);
	handler.AddEmployee(seller);


	handler.ShowAllSalaryInfo();
	handler.showTotalSalary();
}