#include <iostream>
#include "Vehicule.h"

void presenter(Vehicule v) {
	v.affiche();
}

int main() {
	Moto m;
	Voiture vt;
	Vehicule vh;

	// m.affiche();
	// vt.affiche();
	// vh.affiche();

	presenter(m);
	presenter(vt);
	presenter(vh);

	return 0;
}