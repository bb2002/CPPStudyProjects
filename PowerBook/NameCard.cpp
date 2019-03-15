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
		cout << "�̸�: " << this->name << endl;
		cout << "ȸ��: " << this->company << endl;
		cout << "��ȭ��ȣ: " << this->phone << endl;
		cout << "����: ";
		switch (this->level) {
			case LEVEL::CLERK:		cout << "���" << endl; break;
			case LEVEL::SENIOR:		cout << "����" << endl; break;
			case LEVEL::ASSIST:		cout << "�븮" << endl; break;
			case LEVEL::MANAGER:	cout << "����" << endl; break;
		}

		cout << endl;
	}
};

int main() {
	NameCard manClerk("�ܳ� ����Ű", "Bandai", "01-5348-2215", NameCard::LEVEL::CLERK);
	NameCard manSenior("�ڿ��ī ȣ��ī", "KLabGames", "01-5372-1134", NameCard::LEVEL::SENIOR);
	NameCard manAssist("Ÿī�� ġī", "Sony music", "04-53128-2115", NameCard::LEVEL::ASSIST);

	manClerk.ShowCardInfo();
	manSenior.ShowCardInfo();
	manAssist.ShowCardInfo();
}
