#include "ZFraction.h"

ZFraction::ZFraction() {
	this->numerateur = 0;
	this->denominateur = 0;
}

ZFraction::ZFraction(int numerateur) {
	this->numerateur = numerateur;
	this->denominateur = 1;
}

ZFraction::ZFraction(int numerateur, int denominateur) {
	this->numerateur = numerateur;
	this->denominateur = denominateur;
}

ZFraction additionne(ZFraction z1, ZFraction z2);
ZFraction multiplie(ZFraction z1, ZFraction z2);

int ZFraction::PGCD(int n1, int n2) {
	// TEST
	// std::cout << z.PGCD(81, 54) << std::endl; // 27
	// std::cout << z.PGCD(544, 88) << std::endl; // 8
	// std::cout << z.PGCD(54, 81) << std::endl; // 27
	// std::cout << z.PGCD(14, 49) << std::endl; // 7
	// std::cout << z.PGCD(49, 14) << std::endl; // 7
	int r = n1 % n2;
	while (r != 0) {
		n1 = n2;
		n2 = r;
		r = n1 % n2;
	}
	return n2;
}

ZFraction simplifie(ZFraction z) {
	// 5/2
	// 6/2
	// si le reste est egale à zéro on peut diviser
	// 6/3

	// 30/9
	// 10/3

	// 40/16
	// 20/8
	// 10/4
	// 5/2

	return z;
}

bool estSuperieur(ZFraction z) {
	return true;
}
bool estEgale(ZFraction z) {
	return true;
}