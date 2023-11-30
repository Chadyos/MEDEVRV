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

Grille::~Grille(){};

void Grille::afficher(bool hide){
		// affichage de la grille avec des barre 
		cout << "  1 2 3 4 5 6 7 8 9 10" << endl;
		for (int i=0; i<10; i++){
			cout << i+1 << "  ";
			for (int j=0; j<10; j++){
				if(!hide){cout << m_tab[i][j] << " ";}
				else {
					string value = m_tab[i][j];
					if (value == "N"){value ="O";}
					cout << value << " ";}
				}
				cout << endl;
			}
			cout << endl;
		}


bool Grille::isNavire(int x, int y){
		// si il y a un navire on retourne true sinon false 
		if (m_tab[x][y] == "O" || m_tab[x][y] == "X"){
			return false;
		}
		else{
			return true;
		} 
		}

bool Grille::isNavireTouche(int x, int y){
		// si il y a un navire on retourne true sinon false 
		if (m_tab[x][y] == "N"){
			return false;
		}
		else{
			return true;
		} 
		}



void Grille::tir_modif_case(int x, int y){
		if (m_tab[x][y] == "O"){
			m_tab[x][y] = "X";
		}
		else if(m_tab[x][y]=="N"){
			m_tab[x][y] = "T";
		}
}


void Grille::setNavire(int x, int y){
		// on met un navire dans la case 
		m_tab[x][y] = "N";
};
