#include "MagicienBlanc.h"

MagicienBlanc::MagicienBlanc(std::string nom) : Magicien(nom) {
	
}

void MagicienBlanc::soigner(Personnage &cible) {
	cible.recevoirVie(25);
	mana -= 15;
}

