#include <iostream>
#include "ZFraction.h"

int main() {
	ZFraction z0(0);
	ZFraction z1(7, 3);
	ZFraction z2(5, 2);
	z0 = z1.additionne(z1, z2);
	z1 = z1.multiplie(z1, z2);
	z0.affiche();
	z1.affiche();


	return 0;
}