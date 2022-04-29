#include "Personnage.h"

Personnage::Personnage() {
	nom = "John";
	vie = 100;
}

Personnage::Personnage(std::string n) {
	nom = n;
	vie = 100;
}

void Personnage::recevoirDegats(int degats) {
	vie -= degats;
	if (vie < 0) {
		vie = 0;
	}
}

void Personnage::recevoirVie(int v) {
	vie += v;
	if (vie > 100) {
		vie = 100;
	}
}

void Personnage::donnerCoupDePoingt(Personnage &cible) const {
	cible.recevoirDegats(10);
}

void Personnage::getStatus() const {
	std::cout << "Vie: " << vie << std::endl;
}

bool Personnage::estVivant() const {
	return vie > 0;
}