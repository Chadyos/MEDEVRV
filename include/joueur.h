#pragma once

#include <vector>
#include <iostream>
#include <string>
#include <time.h>

#include "navire.h"

using namespace std;

class Joueur {
	string name;
	vector<Navire*> bateaux;
	Grille grille;

public:
	/**
	* \brief Constructor
	* Constructor
	*/
	Joueur();


	/**
	* \brief Constructor
	* Constructor with the name of the player
	*/
	Joueur(string name);

	/**
	* Fonction Permettant d'initialiser les navires d'un joueur dans sa grille
	* Prends en paramètre le nombre de navire à placer
	* Demande d'abord au joueur s'il veut un placement automatique
	* Sinon place les navires un par un en entrant successivment les coordonnées x et y
	*/
	void init(int nbre);

	/**
	* Fonction Permettant d'initialiser automatiquement les navires la grille
	*/
	void initAuto(int nbre);

	/**
	* @param x Coordonnée x d'un tir
	* @param y Coordonnée y d'un tir
	* @return True si un bateau est touché à ces coordonnées
	*/
	bool estTouche(int x, int y);

	/**
	* Return True si le joueur a perdu
	*/
	bool ff();

	/**
	* Affiche la grille sans montrer les bateaux non touché
	* Il s'agit de la vue qu'aurait l'adversaire
	*/
	void afficheGrilleAdv();

	//Getters
	string getName() { return name; };
	vector<Navire*> getBateaux() { return bateaux; };
	Grille getGrille() { return grille; };

	//Setters
	void setName(string name) { name = name; };
	void setBateaux(vector<Navire*>bateaux) { bateaux = bateaux; };
	void setGrille(Grille grille) { grille = grille; };
	void addBateaux(Navire* bateau) { bateaux.push_back(bateau); };

};
