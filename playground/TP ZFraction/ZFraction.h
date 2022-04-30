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
		bool estSuperieur(ZFraction const& z) const;
		bool estEgale(ZFraction const& z) const;
		void affiche();
		ZFraction& operator+=(ZFraction const& z);
		ZFraction& operator+=(int n);
	private:
		int numerateur;
		int denominateur;
};

bool operator==(ZFraction const& z1, ZFraction const& z2);
bool operator!=(ZFraction const& z1, ZFraction const& z2);
bool operator>(ZFraction const& z1, ZFraction const& z2);
ZFraction operator+(ZFraction const& z1, ZFraction const& z2);
ZFraction operator+(ZFraction const& z1, int n);

#endif