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

Duree& Duree::operator+=(Duree const& d) {
	secondes += d.secondes;
	minutes += secondes / 60;
	secondes %= 60;

	minutes += d.minutes;
	heures += minutes / 60;
	minutes %= 60;

	heures += d.heures;

	return *this;
}

Duree& Duree::operator+=(int s) {
	secondes += s;
	minutes += secondes / 60;
	secondes %= 60;

	heures += minutes / 60;
	minutes %= 60;

	return *this;
}

Duree& Duree::operator-=(Duree const& d) {
	secondes -= d.secondes;
	minutes -= secondes / 60;
	secondes %= 60;

	minutes -= d.minutes;
	heures -= minutes / 60;
	minutes %= 60;

	heures -= d.heures;

	return *this;
}

Duree& Duree::operator-=(int s) {
	secondes -= s;
	minutes -= secondes / 60;
	secondes %= 60;

	heures -= minutes / 60;
	minutes %= 60;

	return *this;
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

bool operator>=(Duree const& d1, Duree const& d2) {
	return !(d1.estPlusPetitQue(d2));
}

bool operator>(Duree const& d1, Duree const& d2) {
	return !(d1.estPlusPetitQue(d2) || d1.estEgale(d2));
}

bool operator<=(Duree const& d1, Duree const& d2) {
	return (d1.estPlusPetitQue(d2) || d1.estEgale(d2));
}

Duree operator+(Duree const& d1, Duree const& d2) {
	Duree resultat(d1);
	resultat += d2;
	return resultat;
}

Duree operator+(Duree const& d1, int secondes) {
	Duree resultat(d1);
	resultat += secondes;
	return resultat;
}

Duree operator-(Duree const& d1, Duree const& d2) {
	Duree resultat(d1);
	resultat -= d2;
	return resultat;
}

Duree operator-(Duree const& d1, int secondes) {
	Duree resultat(d1);
	resultat -= secondes;
	return resultat;
}