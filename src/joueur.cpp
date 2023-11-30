#include "joueur.h"

Joueur::Joueur(){
	this->name = "Joueur";
	this->grille = Grille();
}

Joueur::Joueur(string name){
	this->name = name;
	this->grille = Grille();
}

void Joueur::init(int nbre){
	int x, y, dir;
	int i = 1;
	while (i <= nbre) {
		cout << "Positionnement du bateau n°" << i << endl;
		cout << "Coordonnées x : ";
		cin >> x;
		cout << "Coordonnées y : ";
		cin >> y;
		cout << "Direction 2 ↓, 4 ←, 8 ↑ ou 6 → ";
		cin >> dir;
		this->bateaux.push_back(new Navire(x, y, dir, &(this->grille)));
		if (this->bateaux.back()->getState()) {
			i++;
		}
		else {
			bateaux.pop_back();
		}
	}
}

void Joueur::initAuto(int nbre) {
	srand(time(NULL));
	int x, y, dir;
	int i = 1;
	int random = rand();
	while (i <= nbre) {
		x = random % 10 ;
		y = (random / 10) % 10;
		dir = ((random / 100) % 4 + 1) * 2;
		this->bateaux.push_back(new Navire(x, y, dir, &this->grille));
		if (this->bateaux.back()->getState()) {
			i++;
		} else {
			bateaux.pop_back();
		}
	}
}

bool Joueur::estTouche(int x, int y)
{
	bool bo = grille.isNavire(x, y);
	grille.tir_modif_case(x, y);
	return bo;
}

bool Joueur::ff() {

}