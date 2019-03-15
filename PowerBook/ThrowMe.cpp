#include "pch.h"

void run() throw(int) {
	throw 0.5;
}

int main() {
	try {
		run();
	}
	catch (int ex) {
		cout << ex << endl;
	}
}