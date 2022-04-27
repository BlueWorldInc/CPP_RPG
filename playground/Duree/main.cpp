#include <iostream>
#include "Duree.h"

int main() {
	Duree d1(0, 5, 12), d2(4, 44, 15), d3(0, 5, 12);
	if (d1 < d3) {
		std::cout << "d1 pas plus petit";
	} else {
		std::cout << "d1 plus petit";
	}
	return 0;
}