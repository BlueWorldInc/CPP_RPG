#include <iostream>
#include "Duree.h"

Duree::Duree(int heures, int minutes, int secondes) {
	this->heures = heures;
	this->minutes = minutes;
	this->secondes = secondes;
}

bool Duree::estEgale(Duree const& d) const {
	return (heures == d.heures && minutes == d.minutes && secondes == d.secondes);
}

bool Duree::estPlusPetitQue(Duree const& d) const {
	if (heures < d.heures) {
		return true;
	} else if (heures == d.heures && minutes < d.minutes) {
		return true;
	} else if (heures == d.heures && minutes == d.minutes && secondes < d.secondes) {
		return true;
	} else {
		return false;
	}
}

void Duree::affiche() {
	std::cout << heures << "h" << minutes << "m" << secondes << "s" << std::endl;
}

bool operator==(Duree const& d1, Duree const& d2) {
	return (d1.estEgale(d2));
}

bool operator!=(Duree const& d1, Duree const& d2) {
	return !(d1.estEgale(d2));
}

bool operator<(Duree const& d1, Duree const& d2) {
	return (d1.estPlusPetitQue(d2));
}