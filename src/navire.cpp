#include "navire.h"

// navire pour n

bool test(int x, int y, int dir, int taille) {
	switch (dir)
	{
	case 6:
		return x <= 10 - taille;
	case 4:
		return x >= taille - 1 ;
	case 2:
		return y >= taille - 1;
	case 8:
		return y <= 10 - taille;
 	default:
		break;
	}
	return false;
}

Navire::Navire(int x, int y, int dir, int t, Grille* g) {
	grille = g;
	taille = t;
	if (test(x, y, dir, taille)) {
		int posX = x;
		int posY = y;
		vector<int> coor;
		coor = { 0,0 };
		for (int i = 0; i < taille; i++) {
			if(!g->isNavire(posX, posY)) {
				coor[0] = posX;
				coor[1] = posY;
				position.push_back(coor);
				switch (dir) {
				case 6:
					posY += 1;
					break;
				case 4:
					posY -= 1;
					break;
				case 2:
					posX += 1;
					break;
				case 8:
					posX -= 1;
					break;
				default:
					break;
				}
			}
		}
	}
	if (position.size() == taille) 
	{ 
		state = true;
		for (int i = 0; i < 3; i++) {
			g->setNavire(position[i][0], position[i][1]);
		}
	}
	else 
	{ 
		state = false;
		cout << "fail to create ship" << endl;
	}
}

