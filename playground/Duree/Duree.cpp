#include <iostream>
#include "Duree.h"

Duree::Duree(int heures, int minutes, int secondes) {
	this->heures = heures;
	this->minutes = minutes;
	this->secondes = secondes;
}

void Duree::affiche() {
	std::cout << (int)heures << "h" << (int)minutes << "m" << (int)secondes << "s" << std::endl;
}