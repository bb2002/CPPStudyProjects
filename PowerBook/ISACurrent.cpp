#include "pch.h"
#include <iostream>

using namespace std;


class Pasokon {
private:
	char owner[50];

public:
	Pasokon(const char *name) {
		strcpy(owner, name);
	}

	void calc() {
		cout << "01010101000101  �����..." << endl;
	}
};

class Notebook : public Pasokon {
private:
	int battery;

public:
	Notebook(const char* name, int battery) : Pasokon(name), battery(battery) {}

	void charge() {
		battery += 5;
	}

	void use() {
		battery -= 5;
	}

	int getBattery() {
		return battery;
	}

	void moveandcalc() {
		if (getBattery() < 1) {
			cout << "��ģ ������." << endl;
		}
		else {
			cout << "�̵��ϸ鼭 ... ";
			calc();
			use();
		}
	}
};

class Tablet : public Notebook {
private:
	char regstPenModel[50];

public:
	Tablet(const char* name, int battery, const char* pen) : Notebook(name, battery) {
		strcpy(regstPenModel, pen);
	}

	void write(const char* penInfo) {
		if (getBattery() < 1) {
			cout << "�� ������..." << endl;
		}
		else {
			if (strcmp(this->regstPenModel, penInfo) != 0) {
				cout << "��ŷ ���� ������." << endl;
			}
			else {
				cout << "���� ����" << endl;
				use();
			}
		}
	}
};

int main() {
	Notebook book("Kurosawa ruby", 50);
	Tablet ta("Matsura kann", 10, "Hudepen");

	book.moveandcalc();
	ta.write("Hudepen");
	ta.write("Ballpen");
}