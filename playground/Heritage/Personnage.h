#ifndef PERSONNAGE
#define PERSONNAGE

#include <iostream>

class Personnage {
	public:
		Personnage();
		Personnage(std::string nom);
		void recevoirDegats(int degats);
		void recevoirVie(int vie);
		void donnerCoupDePoingt(Personnage &cible) const;
		void getStatus() const;
	private:
		int vie;
		std::string nom;
};

#endif