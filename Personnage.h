#ifndef PERSONNAGE
#define PERSONNAGE

#include <string>

class Personnage {
	public:

	Personnage();
	void attaquerPersonnage(Personnage &cible);
	void boirPotion(int viePlus);
	void recevoirDegat(int degat);
	bool estVivant();

	private:

	int vie;
	int mana;
	std::string armeNom;
	int armeDegat;
};

#endif