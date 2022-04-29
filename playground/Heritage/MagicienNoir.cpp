#include "MagicienNoir.h"

void MagicienNoir::mortifier(Personnage &cible) {
	cible.recevoirDegats(50);
	mana -= 50;
}