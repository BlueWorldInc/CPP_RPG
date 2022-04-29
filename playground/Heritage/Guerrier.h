#ifndef GUERRIER
#define GUERRIER

#include "Personnage.h"

class Guerrier : public Personnage {
	public:
		Guerrier(std::string nom);
		void attaquePuissanteAuMarteau(Personnage &cible) const;
};

#endif