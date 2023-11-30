#pragma once

#include <iostream>
#include <vector>

#include "grille.h"

using namespace std;

class Navire {
private:
	vector<vector<int>> position;
	bool state;
	int taille;
	Grille* grille;

public:
	Navire() {
		position = { {0,0} };
		state = false;
		//taille = 0;
	}

	//on fixe la taille à 3
	Navire(int x, int y, int dir, int taille, Grille* g);
	void setState(bool b){ state = b; }
	bool getState() { return state; }
	vector<vector<int>> getPosition() { return position; }
};