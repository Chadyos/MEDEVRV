#pragma once

#include <vector>
#include <iostream>
#include <string>
#include <time.h>

#include "navire.h"

using namespace std;

/**
 * @class Joueur
 * @brief Représente Joueur dans un Jeu.
 *
 * Cette classe représente un Joueur dans un jeu.
 * Un Joueur possède un nom, une liste de Navire et une grille.
 */
class Joueur
{
	string name;
	vector<Navire *> bateaux;
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
	 * Prends en param�tre le nombre de navire � placer
	 * Demande d'abord au joueur s'il veut un placement automatique
	 * Sinon place les navires un par un en entrant successivment les coordonn�es x et y
	 */
	void init(int nbre);

	/**
	 * Fonction Permettant d'initialiser automatiquement les navires la grille
	 */
	void initAuto(int nbre);

	/**
	 * @param x Coordonn�e x d'un tir
	 * @param y Coordonn�e y d'un tir
	 * @return True si un bateau est touch� � ces coordonn�es
	 */
	bool estTouche(int x, int y);

	/**
	 * Return True si le joueur a perdu
	 */
	bool ff();

	/**
	 * Affiche la grille sans montrer les bateaux non touch�
	 * Il s'agit de la vue qu'aurait l'adversaire
	 */
	void afficheGrilleAdv();

	/**
	 * @brief Récupère le nom du joueur.
	 *
	 * @return string Le nom du joueur.
	 */
	string getName() { return name; };

	/**
	 * @brief Récupère la liste des navires du joueur.
	 *
	 * @return vector<Navire*> La liste des navires du joueur.
	 */
	vector<Navire *> getBateaux() { return bateaux; };

	/**
	 * @brief Récupère la grille de jeu du joueur.
	 *
	 * @return Grille La grille de jeu du joueur.
	 */
	Grille getGrille() { return grille; };

	/**
	 * @brief Définit le nom du joueur.
	 *
	 * @param name Le nouveau nom du joueur.
	 */
	void setName(string name) { this->name = name; };

	/**
	 * @brief Définit la liste des navires du joueur.
	 *
	 * @param bateaux La nouvelle liste des navires du joueur.
	 */
	void setBateaux(vector<Navire *> bateaux) { this->bateaux = bateaux; };

	/**
	 * @brief Définit la grille de jeu du joueur.
	 *
	 * @param grille La nouvelle grille de jeu du joueur.
	 */
	void setGrille(Grille grille) { this->grille = grille; };

	/**
	 * @brief Ajoute un navire à la liste des navires du joueur.
	 *
	 * @param bateau Le navire à ajouter.
	 */
	void addBateaux(Navire *bateau) { bateaux.push_back(bateau); };
};
