#include "pch.h"
#include <iostream>
#include "Printer.h"

void Printer::SetString(const char * data)
{
	this->data = std::string(data);
}
