#include "MagicienNoir.h"

MagicienNoir::MagicienNoir(std::string nom) : Magicien(nom) {
	int poudreNoir = 5;
}

MagicienNoir::MagicienNoir(std::string nom, int poudreNoir) : Magicien(nom) {
	this->poudreNoir = poudreNoir;
}

void MagicienNoir::mortifier(Personnage &cible) {
	cible.recevoirDegats(50);
	mana -= 50;
	poudreNoir -= 1;
}

void MagicienNoir::getStatus() const {
	Magicien::getStatus();
	std::cout << "Pourdre Noir " << poudreNoir << std::endl;
}