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

ZFraction ZFraction::additionne(ZFraction z1, ZFraction z2) {
	// TEST
	// 5/2
	// 7/3
	// 29/6
	ZFraction z(0);
	z.denominateur = z1.denominateur * z2.denominateur;
	z.numerateur = z1.numerateur * z2.denominateur + z2.numerateur * z1.denominateur;
	z.simplifie();
	return z;
}

ZFraction ZFraction::multiplie(ZFraction z1, ZFraction z2) {
	// 5/2
	// 2/4
	// 10/8
	ZFraction z(0);
	z.numerateur = z1.numerateur * z2.numerateur;
	z.denominateur = z1.denominateur * z2.denominateur;
	z.simplifie();
	return z;

}

int ZFraction::PGCD(int n1, int n2) const {
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

void ZFraction::simplifie() {
	int pgcd = this->PGCD(numerateur, denominateur);
	numerateur = numerateur / pgcd;
	denominateur = denominateur / pgcd;
}

ZFraction ZFraction::simplifie(ZFraction z) const {
	int pgcd = this->PGCD(z.numerateur, z.denominateur);
	z.numerateur = z.numerateur / pgcd;
	z.denominateur = z.denominateur / pgcd;
	return z;
}

bool ZFraction::estSuperieur(ZFraction z) {
	return true;
}

bool ZFraction::estEgale(ZFraction z) {
	return true;
}

void ZFraction::affiche() {
	std::cout << numerateur << "/" << denominateur << std::endl;
}