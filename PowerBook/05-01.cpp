#include "pch.h"
#include <iostream>

using namespace std;

class NameCard {
public:
	enum LEVEL
	{
		CLERK = 0, SENIOR, ASSIST, MANAGER
	};

private:
	char* name;
	char* company;
	char* phone;
	LEVEL level;

public:
	NameCard(const char* name, const char* company, const char* phone, LEVEL level)
		: level(level) {
		this->name = new char[50];
		this->company = new char[50];
		this->phone = new char[50];

		strcpy(this->name, name);
		strcpy(this->company, company);
		strcpy(this->phone, phone);
	}

	NameCard(const NameCard& copy) : level(level ){
		this->name = new char[50];
		this->company = new char[50];
		this->phone = new char[50];

		strcpy(this->name, copy.name);
		strcpy(this->company, copy.company);
		strcpy(this->phone, copy.phone);
	}

	~NameCard() {
		cout << this->name << "  DESTROY!!!" << endl;
		delete[] this->name;
		delete[] this->company;
		delete[] this->phone;
	}

	void ShowCardInfo() {
		cout << "이름: " << this->name << endl;
		cout << "회사: " << this->company << endl;
		cout << "전화번호: " << this->phone << endl;
		cout << "직급: ";
		switch (this->level) {
		case LEVEL::CLERK:		cout << "사원" << endl; break;
		case LEVEL::SENIOR:		cout << "주임" << endl; break;
		case LEVEL::ASSIST:		cout << "대리" << endl; break;
		case LEVEL::MANAGER:	cout << "과장" << endl; break;
		}

		cout << endl;
	}
};

int main() {
	NameCard manA("Ballbot", "Bandai!", "010-4917-4155", NameCard::LEVEL::ASSIST);
	NameCard ballbotCopy = manA;

	NameCard manB("Chika", "SOny music", "02-111-55347", NameCard::LEVEL::MANAGER);
	NameCard chikapy = manB;

	ballbotCopy.ShowCardInfo();
	chikapy.ShowCardInfo();
}