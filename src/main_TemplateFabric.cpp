#include "classwithtemplatefabric.h"
#include <iostream>

int main() {
	std::cout << "Creating elements..." << std::endl;

	auto d1 = Base::createBase<Derived1>("abs", 2);
	auto d2 = Base::createBase<Derived2>(2);

	std::cout << "Elements have been successfully created" << std::endl;
	return 0;
}
