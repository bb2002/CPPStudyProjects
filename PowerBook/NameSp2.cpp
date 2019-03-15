#include "pch.h"
#include "NameSp2.h"

int main() {
	SaintSnow::Fun();
	Aqours::Fun();
}

void SaintSnow::Fun() {
	std::cout << "Saint snow fun" << std::endl;
}

void Aqours::Fun(){
	std::cout << "Aqours fun" << std::endl;

	Ruby::Fun();
	Aqours::Dia::Fun();
}

void Aqours::Ruby::Fun() {
	std::cout << "Ruby fun! : " << Ruby::name.data() << std::endl;
}

void Aqours::Dia::Fun() {
	std::cout << "Dia fun! : " << Dia::name.data() << std::endl;
}