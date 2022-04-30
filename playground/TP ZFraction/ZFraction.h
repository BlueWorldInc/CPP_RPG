#ifndef	ZFRACTION
#define ZFRACTION

#include <iostream>

class ZFraction
{
	public:
		ZFraction();
		ZFraction(int numerateur);
		ZFraction(int numerateur, int denominateur);
		ZFraction additionne(ZFraction z1, ZFraction z2);
		ZFraction multiplie(ZFraction z1, ZFraction z2);
		void simplifie();
		ZFraction simplifie(ZFraction z) const;
		int PGCD(int n1, int n2) const;
		bool estSuperieur(ZFraction z);
		bool estEgale(ZFraction z); 
		void affiche();
	private:
		int numerateur;
		int denominateur;
};

#endif