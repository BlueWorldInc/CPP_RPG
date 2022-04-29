#include "Vehicule.h"

void Vehicule::affiche() const {
	std::cout << "Je suis un vehicule" << std::endl;
}

void Voiture::affiche() const {
	std::cout << "Je suis une voiture" << std::endl;
}

void Moto::affiche() const {
	std::cout << "Je suis une moto" << std::endl;
}