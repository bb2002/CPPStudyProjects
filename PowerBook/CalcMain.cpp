#include "pch.h"
#include "Calculator.h"

using namespace std;

int main() {
	Calculator cal;
	cal.Init();

	cout << "A = " << cal.Add(3.2, 2.4) << endl;
	cout << "B = " << cal.Div(3.5, 1.7) << endl;
	cout << "C = " << cal.Min(2.2, 1.5) << endl;
	cout << "D = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
}