#ifndef VEHICULE
#define VEHICULE

#include <iostream>

class Vehicule {
	public:
		void affiche() const; //Affiche une description du Vehicule
	protected:
		int m_prix; //Chaque véhicule a un prix
};

class Voiture : public Vehicule {
	public:
		void affiche() const;
	private:
		int m_portes; //Le nombre de portes de la voiture
};

class Moto : public Vehicule {
	public:
		void affiche() const;
	private:
		double m_vitesse; //La vitesse maximale de la moto
};

#endif