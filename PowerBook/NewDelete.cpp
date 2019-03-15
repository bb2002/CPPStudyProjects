#include "pch.h"

using namespace std;

char* MakeString(int len) {
	char* str = new char[len];
	return str;
}

int main() {
	char* str = MakeString(25);
	strcpy(str, "WONDERFUL STROY~");
	cout << str << endl;

	delete[] str;
}