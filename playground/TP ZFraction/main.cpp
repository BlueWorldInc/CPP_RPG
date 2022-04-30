#include <iostream>
#include "ZFraction.h"

int main() {
	ZFraction z0(0, 0);
	ZFraction z1(19, 4);
	ZFraction z2(5, 2);
	// std::cout << z1.estSuperieur(z2) << std::endl;
	z0.affiche();
	z0 = z1 + z2;
	z0.affiche();
	return 0;
}