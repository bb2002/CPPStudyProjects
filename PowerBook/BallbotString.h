#pragma once
#include <iostream>
using namespace std;

namespace BallbotLib {
	class BString {
	private:
		char* strData;

	public:
		BString(const char* data);

		BString(const BString& other);

		BString();

		BString operator+(const BString& other);

		void operator+=(const BString& other);

		bool operator==(const BString& other);

		ostream& operator<<(ostream& os);

		istream& operator>>(istream& in);

		~BString();

		friend ostream& operator<<(ostream& os, const BString& str);
		friend istream& operator>>(istream& in, BallbotLib::BString& str);
	};
}