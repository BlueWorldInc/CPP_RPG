#include <iostream>
#include "Personnage.h"
#include "Guerrier.h"
 
using namespace std;
 
int main()
{
    Personnage monPersonnage("a");
    // Guerrier monGuerrier("b");
 
    monPersonnage.coupDePoing(monGuerrier);
    // monGuerrier.coupDePoing(monPersonnage);
    // monGuerrier.sePresenter();
	return 0;
}