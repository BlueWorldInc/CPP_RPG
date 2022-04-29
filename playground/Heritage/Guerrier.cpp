#include "Guerrier.h"

Guerrier::Guerrier(std::string n) : Personnage(n){
}

void Guerrier::attaquePuissanteAuMarteau(Personnage &cible) const {
	cible.recevoirDegats(30);
}

