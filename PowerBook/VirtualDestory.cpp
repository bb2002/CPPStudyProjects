#include "pch.h"

using namespace std;

class First {
private:
	char* strone;

public:
	First(const char* str) {
		strone = new char[100];
		strcpy(this->strone, str);
	}

	virtual ~First() {
		cout << "FIRST DESTORY!!!!" << endl;
		delete[] this->strone;
	}
};

class Second : public First {
private:
	char* strtwo;

public:
	Second(const char* str, const char* str2) : First(str) {
		this->strtwo = new char[100];
		strcpy(this->strtwo, str2);
	}

	~Second() {
		cout << "SECOND DESTORY!!!!" << endl;
		delete[] this->strtwo;
	}
};

int main() {
	//First* f = new First("Ruby");
	First* s = new Second("Kurosawa", "Ruby");

	delete s;
}