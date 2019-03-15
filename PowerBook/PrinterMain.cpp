#include "pch.h"
#include <iostream>
#include "Printer.h"

int main() {
	Printer p;
	p.SetString("난랏 말쓰미 쯍국과 달라");
	p.ShowString();

	p.SetString("LOVE LIVE YEAR!");
	p.ShowString();
}
