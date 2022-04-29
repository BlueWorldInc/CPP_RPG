#include <iostream>
#include "Personnage.h"
#include "Guerrier.h"
#include "Magicien.h"
#include "MagicienBlanc.h"
#include "MagicienNoir.h"

int main() {
	Personnage alfred("Alfred");
	Guerrier goliath("Goliath");
	Magicien merlin("Merlin");
	MagicienBlanc mera("Mera");
	MagicienNoir camor("Camor", 15);

	alfred.donnerCoupDePoingt(goliath);
	merlin.bouleDeGlace(goliath);
	goliath.attaquePuissanteAuMarteau(merlin);
	merlin.donnerCoupDePoingt(alfred);

	alfred.getStatus();
	goliath.getStatus();
	merlin.getStatus();
	mera.soigner(merlin);
	merlin.getStatus();
	camor.mortifier(merlin);
	merlin.getStatus();
	std::cout << camor.estVivant();

	return 0;
}