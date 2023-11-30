#pragma once

#include <vector>
#include <iostream>
#include <string>

#include "Navire.h"

using namespace std;

class Joueur {
	string name;
	vector<Navire*> bateaux;
	Grille grille;

public:
	Joueur();
	Joueur(string name);
	void init();
	void jouer(int x, int y);
	bool ff();

	string getName() { return name; };
	vector<Navire*> getBateaux() { return bateaux; };
	Grille getGrille() { return grille; };
	void setName(string name) { name = name; };
	void setBateaux(vector<Navire*>bateaux) { bateaux = bateaux; };
	void setGrille(Grille grille) { grille = grille; };

};
