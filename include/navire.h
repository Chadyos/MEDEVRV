#pragma once

#include <iostream>
#include <vector>

#include "grille.h"

using namespace std;

/**
 * @class Navire
 * @brief Représente un navire dans un jeu.
 * 
 * Cette classe représente un navire dans un jeu. Un navire est caractérisé par sa position, son état, sa taille et la grille sur laquelle il est placé.
 */
class Navire {
private:
	vector<vector<int>> position; /**< La position du navire sur la grille. */
	bool state; /**< L'état du navire (true si le navire est en vie, false sinon). */
	int taille; /**< La taille du navire. */
	Grille* grille; /**< La grille sur laquelle le navire est placé. */

public:
	/**
	 * @brief Constructeur par défaut de la classe Navire.
	 * 
	 * Initialise la position du navire à (0,0), l'état à false et la taille à 0.
	 */
	Navire() {
		position = { {0,0} };
		state = false;
		//taille = 0;
	}

	/**
	 * @brief Constructeur de la classe Navire.
	 * 
	 * @param x La coordonnée x de la position du navire.
	 * @param y La coordonnée y de la position du navire.
	 * @param dir La direction du navire.
	 * @param taille La taille du navire.
	 * @param g Un pointeur vers la grille sur laquelle le navire est placé.
	 */
	Navire(int x, int y, int dir, int taille, Grille* g);

	/**
	 * @brief Définit l'état du navire.
	 * 
	 * @param b La valeur de l'état du navire.
	 */
	void setState(bool b){ state = b; }

	/**
	 * @brief Récupère l'état du navire.
	 * 
	 * @return L'état du navire.
	 */
	bool getState() { return state; }

	/**
	 * @brief Récupère la position du navire.
	 * 
	 * @return La position du navire.
	 */
	vector<vector<int>> getPosition() { return position; }
};