#ifndef MAGICIEN
#define MAGICIEN

#include "Personnage.h"

class Magicien : public Personnage {
	public:
		Magicien(std::string);
		void bouleDeFeu(Personnage &cible);
		void bouleDeGlace(Personnage &cible);
		void getStatus() const;
	protected:
		int mana;
};

#endif