#pragma once

#include <vector>
#include <iostream>
#include <string>
#include <time.h>

#include "navire.h"

using namespace std;

class Joueur {
	string name;
	vector<Navire*> bateaux;
	Grille grille;

public:
	Joueur();
	Joueur(string name);
	void init(int nbre);
	void initAuto(int nbre);
	bool estTouche(int x, int y);
	bool ff();

	//Getters
	string getName() { return name; };
	vector<Navire*> getBateaux() { return bateaux; };
	Grille getGrille() { return grille; };
	//Setters
	void setName(string name) { name = name; };
	void setBateaux(vector<Navire*>bateaux) { bateaux = bateaux; };
	void setGrille(Grille grille) { grille = grille; };
	void addBateaux(Navire* bateau) { bateaux.push_back(bateau); };

};
