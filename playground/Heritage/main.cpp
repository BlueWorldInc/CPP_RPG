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
	MagicienNoir costa("Costa", 15);
	Guerrier miki("Miki");

	alfred.donnerCoupDePoingt(goliath);
	merlin.bouleDeGlace(goliath);
	goliath.attaquePuissanteAuMarteau(merlin);
	merlin.donnerCoupDePoingt(alfred);

	// alfred.getStatus();
	// goliath.getStatus();
	// merlin.getStatus();
	// mera.soigner(merlin);
	// merlin.getStatus();
	// costa.mortifier(merlin);
	// merlin.getStatus();

	std::cout << "Choisir une cible: 1: Alfred, 2: Goliath, 3: Merlin, 4: Mera, 5: Costa";
	int choixUtilisateur = 0;
	std::cin >> choixUtilisateur;

	Personnage cible;

	switch (choixUtilisateur) {
	case 1:
		cible = alfred;
		break;
	case 2:
		cible = goliath;
		break;
	case 3:
		cible = merlin;
		break;
	case 4:
		cible = mera;
		break;
	case 5:
		cible = costa;
		break;
	}

	miki.donnerCoupDePoingt(cible);
	cible.getStatus();

	return 0;
}