#include <iostream>
#include "Duree.h"

int main() {
	Duree d1(0, 20, 52), d2(4, 44, 15), d3(0, 5, 12);
	std::cout << "d1 + d2" << std::endl;
	d1 += 10;
	d1.affiche();
	return 0;
}