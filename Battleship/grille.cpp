#include "grille.h"
#include <string>
#include <iostream>
using namespace std;
// constructeur de la grille 

Grille::Grille(){
			for (int i=0; i<10; i++){
			for (int j=0; j<10; j++){
				m_tab[i][j] = "O";
			}
		}
    };

Grille::~grille(){};

void Grille::afficher(){
		// affichage de la grille avec des barre 
		cout << "  1 2 3 4 5 6 7 8 9 10" << endl;
		for (int i=0; i<10; i++){
			cout << i+1 << " ";
			for (int j=0; j<10; j++){
				cout << m_tab[i][j] << " ";
			}
			cout << endl;
		}
}
