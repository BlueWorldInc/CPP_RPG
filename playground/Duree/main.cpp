#include <iostream>
#include "Duree.h"

int main() {
	Duree d1(0, 5, 12), d2(4, 44, 15), d3(0, 5, 12);
	d1.affiche();
	d3.affiche();
	if (d1 == d3) {
		std::cout << "Durée égale";
	} else {
		std::cout << "Durée ne sont pas égale";
	}
	std::cout << std::endl;
	if (d1 != d3) {
		std::cout << "Durée ne sont pas égale";
	} else {
		std::cout << "Durée égale";
	}
	return 0;
}