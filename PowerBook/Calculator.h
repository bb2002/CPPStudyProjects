#pragma once
class Calculator {
private:
	int add = 0, div = 0, min = 0, mul = 0;

public:
	void Init();
	double Add(double a, double b);
	double Div(double a, double b);
	double Min(double a, double b);
	double Mul(double a, double b);
	void ShowOpCount();
};