#include <iostream>
#include <vector>

using namespace std;

class Navire {
private:
	vector<int> position;
	bool state;
	int taille;

public:
	Navire() {
		position = { 0,0 };
		state = false;
		taille = 0;
	}

	Navire(int x, int y, int t) {
		position.push_back(x);
		position.push_back(y);
		state = true;
		taille = t;
	}

	void setState(bool b){ state = b; }

	vector<int> getPosition() { return position; }

	bool getState() { return state; }

	int getTaille() { return taille; }
};