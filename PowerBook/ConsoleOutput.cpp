#include "pch.h"

namespace ballbot {
	class ostream {
	public:
		ostream& operator<<(const char* str) {
			printf("%s", str);
			return *this;
		}

		ostream& operator<<(char str) {
			printf("%c", str);
			return *this;
		}

		ostream& operator<<(int num) {
			printf("%d", num);
			return *this;
		}

		ostream& operator<<(double d) {
			printf("%g", d);
			return *this;
		}

		ostream& operator<<(ostream& (*fp)(ostream& ostm)) {
			fp(*this);
			return *this;
		}

		ostream& endl(ostream& ostm) {
			ostm << '\n';
			fflush(stdout);
			return ostm;
		}
	};

	ostream pp;
}

int main() {
	using ballbot::pp;

	pp << "Hello" << " world!";
}