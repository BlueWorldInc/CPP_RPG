#include <iostream>
#include "Personnage.h"
#include "Guerrier.h"
#include "Magicien.h"

int main() {
	Personnage alfred("Alfred");
	Guerrier goliath("Goliath");
	Magicien merlin("Merlin");
	
	alfred.donnerCoupDePoingt(goliath);
	merlin.bouleDeGlace(goliath);
	goliath.attaquePuissanteAuMarteau(merlin);
	merlin.donnerCoupDePoingt(alfred);

	alfred.getStatus();
	goliath.getStatus();
	merlin.getStatus();

	return 0;
}