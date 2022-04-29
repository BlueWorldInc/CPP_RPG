#ifndef MAGICIEN_NOIR
#define MAGICIEN_NOIR

#include "Magicien.h"

class MagicienNoir : public Magicien {
	public:
		MagicienNoir(std::string nom);
		MagicienNoir(std::string nom, int poudreNoir);
		void mortifier(Personnage &cible);
		void getStatus() const;
	protected:
		int poudreNoir;
};

#endif

