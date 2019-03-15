#include "pch.h"

template <typename T>
T Max(T a, T b) {
	return a > b ? a : b;
}

template <>
char* Max<char*>(char* a, char* b) {
	cout << "111111111111111" << endl;
	return strlen(a) > strlen(b) ? a : b;
}

template <>
const char* Max<const char*>(const char* a, const char* b) {
	cout << "2222222222222222" << endl;
	return strcmp(a, b) > 0 ? a : b;
}

int main() {
	cout << Max(11, 15) << endl;
	cout << Max('A', 'B') << endl;
	cout << Max(3.14, 3.141592) << endl;
	cout << Max("SimpleIs", "BEST!") << endl;

	char str[] = "I LIKE!";
	char str2[] = "LOVELIVE YEAR!";
	cout << Max(str, str2) << endl;
}