#ifndef DUREE
#define DUREE

class Duree {
	public:
		Duree(int heures = 0, int minutes = 0, int secondes = 0);
		void affiche();
		bool estEgale(Duree const& d) const;
		bool estPlusPetitQue(Duree const& d) const;
		Duree& operator+=(Duree const& d);
		Duree& operator+=(int secondes);

	private:
		int secondes;
		int minutes;
		int heures;
};

bool operator==(Duree const& d1, Duree const& d2);
bool operator!=(Duree const& d1, Duree const& d2);
bool operator<(Duree const& d1, Duree const& d2);
bool operator>=(Duree const& d1, Duree const& d2);
bool operator>(Duree const& d1, Duree const& d2);
bool operator<=(Duree const& d1, Duree const& d2);
Duree operator+(Duree const& d1, Duree const& d2);
Duree operator+(Duree const& d1, int secondes);

#endif