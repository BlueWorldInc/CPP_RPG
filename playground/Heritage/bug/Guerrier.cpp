#include "Guerrier.h"
#include "Personnage.h"

Guerrier::Guerrier(std::string nom) : Personnage(nom) {

}

void Guerrier::coupDePoingPuissant(Personnage &cible)
{
    cible.recevoirDegats(20);
}