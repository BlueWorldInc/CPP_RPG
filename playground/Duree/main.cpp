#include <iostream>
#include "Duree.h"

int main() {
	Duree d1(0, 20, 53), d2(4, 44, 57), d3(0, 5, 12);
	std::cout << d1 + d2 << std::endl;
	return 0;
}