#include "pch.h"

using namespace std;

char* MakeStrAdr(int len) {
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}

int main() {
	char* str = MakeStrAdr(40);
	strcpy(str, "WATER BLUE NEW WORLD!");
	cout << str << endl;

	free(str);
}