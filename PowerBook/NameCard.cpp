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
	NameCard manClerk("콘노 유우키", "Bandai", "01-5348-2215", NameCard::LEVEL::CLERK);
	NameCard manSenior("코우사카 호노카", "KLabGames", "01-5372-1134", NameCard::LEVEL::SENIOR);
	NameCard manAssist("타카미 치카", "Sony music", "04-53128-2115", NameCard::LEVEL::ASSIST);

	manClerk.ShowCardInfo();
	manSenior.ShowCardInfo();
	manAssist.ShowCardInfo();
}
