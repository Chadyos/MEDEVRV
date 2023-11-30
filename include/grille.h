#pragma once 
#include <string>
#include <iostream>
using namespace std;

// Création de la classe grille

class Grille
{
public:
	Grille();
	~Grille();

	void afficher();
	bool isNavire(int x, int y);
	void setNavire(int x, int y);
	void tir_modif_case(int x, int y);
	string m_tab[10][10];
};