#include "pch.h"
#include "BallbotString.h"

namespace BallbotLib {
	BString::BString(const char* data) {
		this->strData = new char[strlen(data) + 1];
		strcpy(this->strData, data);
	}

	BString::BString(const BString& other) {
		this->strData = new char[strlen(other.strData) + 1];
		strcpy(this->strData, other.strData);
	}

	BString::BString() {
		this->strData = nullptr;
	}

	BString BString::operator+(const BString& other) {
		char* tmp = new char[strlen(this->strData) + strlen(other.strData) + 1];
		strcpy(tmp, this->strData);
		strcat(tmp, other.strData);
		return BString(tmp);
	}


	void BString::operator+=(const BString& other) {
		char* newStr = strcat(this->strData, other.strData);
		this->strData = new char[strlen(newStr) + 1];
		strcpy(this->strData, newStr);
	}

	bool BString::operator==(const BString& other) {
		return strcmp(this->strData, other.strData) ? false : true;
	}

	ostream& BString::operator<<(ostream& os) {
		os << this->strData;
		return os;
	}

	istream& BString::operator>>(istream& in) {
		in >> this->strData;
		return in;
	}

	BString::~BString() {
		delete[] strData;
	}

	ostream& operator<<(ostream& os, const BString& str) {
		os << str.strData;
		return os;
	}

	istream& operator>>(istream& in, BString& str) {
		char* tmp = new char[5000];
		in >> tmp;

		str.strData = new char[strlen(tmp) + 1];
		strcpy(str.strData, tmp);
		return in;
	}
}