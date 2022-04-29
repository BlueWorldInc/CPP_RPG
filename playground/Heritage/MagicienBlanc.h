#ifndef MAGICIEN_BLANC
#define MAGICIEN_BLANC

#include "Magicien.h"

class MagicienBlanc : public Magicien {
	public:
		MagicienBlanc(std::string nom);
		void soigner(Personnage &cible);
};

#endif
