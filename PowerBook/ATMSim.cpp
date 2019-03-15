#include "pch.h"
#include <cstring>

class AccountException {
public:
	virtual void show() = 0;
};

class DepositException : public AccountException {
private:
	int reqMoney;

public:
	DepositException(int money) : reqMoney(money) {

	}

	void show() {
		cout << reqMoney << " �� ����� �� �����ϴ�." << endl;
	}
};

class WithdrawException : public AccountException {
private:
	int balance;

public:
	WithdrawException(int money) : balance(money) {

	}

	void show() {
		cout << "���� �޼��� -> �ܾ� ���� : " << this->balance << endl;
	}
};

class Account {
private:
	char accNum[30];
	int balance;

public:
	Account(const char* acc, int money) : balance(money) {
		strcpy(this->accNum, acc);
	}

	void deposit(int money) throw(AccountException) {
		if (money < 0) {
			DepositException expn(money);
			throw expn;
		}
		else {
			balance += money;
		}
	}

	void withdraw(int money) throw(AccountException) {
		if (money > balance) {
			throw WithdrawException(balance);
		}
		else {
			balance -= money;
		}
	}

	void show() {
		cout << "�� ���� : " << this->accNum << endl;
		cout << "�ܰ� : " << this->balance << endl;
	}
};

int main() {
	Account acc("349-032021-01-010", 5000);
	try {
		acc.deposit(2000);
		acc.deposit(-1000);
	}
	catch (AccountException& ex) {
		ex.show();
	}

	acc.show();

	try {
		acc.withdraw(3500);
		acc.withdraw(450000);
	}
	catch (AccountException& ex) {
		ex.show();
	}

	acc.show();
}