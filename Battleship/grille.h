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

private:
	string m_tab[10][10];
};