#include "pch.h"
#include <cstring>

int main() {
	char* str = new char[20];
	strcpy(str, "Hello world!");
	std::cout << strlen(str) << std::endl;
	std::cout << strcmp(str, "Hello world") << std::endl;
}