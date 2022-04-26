#include <iostream>

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

Personnage::Personnage() {
	vie = 100;
	mana = 100;
}

void Personnage::attaquerPersonnage(Personnage &cible) {
	cible.recevoirDegat(armeDegat);
}
void Personnage::boirPotion(int viePlus) {
	vie += viePlus;
	if (vie > 100) {
		vie = 100;
	}
}
void Personnage::recevoirDegat(int degat) {
	vie -= degat;
	if (vie < 0) {
		vie = 0;
	}
}
bool Personnage::estVivant() {
	return vie > 0;
}

int main() {

	Personnage david;
	std::cout << david.estVivant();
	return 0;
}