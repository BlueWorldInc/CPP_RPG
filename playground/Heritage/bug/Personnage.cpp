#include "Personnage.h"
 
using namespace std;
 
Personnage::Personnage() : m_vie(100), m_nom("Jack")
{
 
}

Personnage::Personnage(std::string nom) : m_vie(100), m_nom(nom)
{
 
}

void Personnage::recevoirDegats(int degats)
{
    m_vie -= degats;
}
 
void Personnage::coupDePoing(Personnage &cible)
{
    cible.recevoirDegats(10);
}

void Personnage::sePresenter() const
{
    std::cout << m_vie << " " << m_nom << std::endl;
}