#include "pch.h"
#include <iostream>
#include "Printer.h"

int main() {
	Printer p;
	p.SetString("���� ������ �I���� �޶�");
	p.ShowString();

	p.SetString("LOVE LIVE YEAR!");
	p.ShowString();
}
