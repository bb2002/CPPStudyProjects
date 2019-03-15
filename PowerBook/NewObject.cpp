#include "pch.h"

using namespace std;

class Simple {
public:
	Simple() {
		cout << "Wonderful stroy con!" << endl;
	}
};

int main() {
	cout << "case 1 :";
	Simple* sp1 = new Simple;

	cout << "case 2:";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "END OF MAIN" << endl;
	delete sp1;
	free(sp2);

}