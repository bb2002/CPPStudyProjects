#include "pch.h"
#include <iostream>
#include "Calculator.h"

void Calculator::Init() {

}

double Calculator::Add(double a, double b)
{
	this->add++;
	return a + b;
}

double Calculator::Div(double a, double b)
{
	this->div++;
	return a / b;
}

double Calculator::Min(double a, double b)
{
	this->min++;
	return a - b;
}

double Calculator::Mul(double a, double b)
{
	this->mul++;
	return a * b;
}

void Calculator::ShowOpCount()
{
	using namespace std;
	cout << "µ¡¼À : " << add << " ";
	cout << "»¬»ù : " << min << " ";
	cout << "°ö»ù : " << mul << " ";
	cout << "³ª´°¼À : " << div << " ";
}