#include "pch.h"

namespace SaintNetwork {
	inline void Run() {
		std::cout << "Saint work!" << std::endl;
	}
}

namespace AqoursNetworks {
	inline void Run() {
		std::cout << "Aqours work!" << std::endl;
	}
}

int main() {
	SaintNetwork::Run();
	AqoursNetworks::Run();
}