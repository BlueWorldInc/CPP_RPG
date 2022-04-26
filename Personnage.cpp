#include "Personnage.h"

Personnage::Personnage() {

}

void Personnage::attaquerPersonnage(Personnage &cible) {
	cible.recevoirDegat(armeDegat);
}
void Personnage::boirPotion(int viePlus) {
	vie += viePlus;
	if (vie > 100) {
		vie = 100;
	}
}
void Personnage::recevoirDegat(int degat) {
	vie -= degat;
	if (vie < 0) {
		vie = 0;
	}
}
bool Personnage::estVivant() {
	return vie > 0;
}