#pragma once

#include <vector>
#include <iostream>
#include 'Navire.h'

using namespace std;

class Joueur {
	string name;
	vector<Navire*>;
	Grille grille;

public:
	void init();
	void jouer(int x, int y);
	bool ff();

};
