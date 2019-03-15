#pragma once
#include <iostream>

class Printer {
private:
	std::string data;

public:
	void SetString(const char* data);
	inline void ShowString() {
		std::cout << data.data() << std::endl;
	}
};