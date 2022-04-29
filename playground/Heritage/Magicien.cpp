#include "Magicien.h"

Magicien::Magicien(std::string nom): Personnage(nom) {
	mana = 100;
}

void Magicien::bouleDeFeu(Personnage &cible) {
	cible.recevoirDegats(25);
	mana -= 15;
}

void Magicien::bouleDeGlace(Personnage &cible) {
	cible.recevoirDegats(35);
	mana -= 25;
}

void Magicien::getStatus() const {
	Personnage::getStatus();
	std::cout << "Mana " << mana << std::endl;
}