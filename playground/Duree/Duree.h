#ifndef DUREE
#define DUREE

class Duree {
	public:
		Duree(int heures = 0, int minutes = 0, int secondes = 0);
		void affiche();

	private:
		int secondes;
		int minutes;
		int heures;
};


#endif