#include "MagicienBlanc.h"

void MagicienBlanc::soigner(Personnage &cible) {
	cible.recevoirVie(25);
	mana -= 15;
}