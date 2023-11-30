#include "navire.h"

// navire pour n

bool test(int x, int y, int dir) {
	switch (dir)
	{
	case 6:
		return x < 8;
	case 4:
		return x > 1;
	case 2:
		return y > 1;
	case 8:
		return y < 8;
 	default:
		break;
	}
}

Navire::Navire(int x, int y, int dir, Grille* g) {
	grille = g;
	while (test(x, y, dir)) {
		int posX = x;
		int posY = y;
		vector<int> coor;
		coor = { 0,0 };
		for (int i = 0; i < 3; i++) {
			if(!g->isNavire(posX, posY)) {
				coor[0] = posX;
				coor[1] = posY;
				position.push_back(coor);
				switch (dir) {
				case 6:
					posX += 1;
					break;
				case 4:
					posX -= 1;
					break;
				case 2:
					posY -= 1;
					break;
				case 8:
					posY += 1;
					break;
				default:
					break;
				}
			}
		}
	}
	if (position.size() == 3) 
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

