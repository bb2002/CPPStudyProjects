#include "pch.h"

using namespace std;

namespace Saint {

	namespace Ria {
		 
		namespace Black {
			void Fun() {
				cout << "Saint fun" << endl;
			}
		}
	}
}

int main() {
	namespace KazunoRia = Saint::Ria::Black;
	using namespace KazunoRia;

	Fun();
}