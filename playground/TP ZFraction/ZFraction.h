#ifndef	ZFRACTION
#define ZFRACTION

class ZFraction
{
	public:
		ZFraction();
		ZFraction(int numerateur);
		ZFraction(int numerateur, int denominateur);
		ZFraction additionne(ZFraction z1, ZFraction z2);
		ZFraction multiplie(ZFraction z1, ZFraction z2);
		ZFraction simplifie(ZFraction z);
		int PGCD(int n1, int n2);
		bool estSuperieur(ZFraction z);
		bool estEgale(ZFraction z); 
	private:
		int numerateur;
		int denominateur;
};

#endif