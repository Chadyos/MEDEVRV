#pragma once
#include <string>
#include <iostream>
using namespace std;

/**
 * @brief Classe représentant la grille de jeu.
 *
 */

class Grille
{
public:
	/**
	 * @brief Constructeur par défaut de la grille.
	 * Initialise une grille 10x10 où chaque case est marquée par "O".
	 */
	Grille();
	/**
	 * @brief Destructeur de la grille.
	 */
	~Grille();
	/**
	 * @brief Affiche la grille dans la console.
	 *
	 * @param hide Si true, cache les navires non touchés sur la grille.
	 */
	void afficher(bool hide);
	/**
	 * @brief Vérifie si une case contient un navire.
	 *
	 * @param x Coordonnée X de la case à vérifier.
	 * @param y Coordonnée Y de la case à vérifier.
	 * @return true Si un navire est présent dans la case spécifiée.
	 * @return false Si la case spécifiée ne contient pas de navire.
	 */
	bool isNavire(int x, int y);

	/**
	 * @brief Vérifie si un navire dans une case spécifiée est touché.
	 *
	 * @param x Coordonnée X de la case à vérifier.
	 * @param y Coordonnée Y de la case à vérifier.
	 * @return true Si le navire dans la case spécifiée est touché.
	 * @return false Si le navire dans la case spécifiée n'est pas touché.
	 */
	void setNavire(int x, int y);
	/**
	 * @brief Modifie l'état d'une case de la grille après un tir.
	 * Marque la case comme "X" si le tir est dans l'eau et comme "T" si un navire est touché.
	 *
	 * @param x Coordonnée X de la case à modifier.
	 * @param y Coordonnée Y de la case à modifier.
	 */
	bool isNavireTouche(int x, int y);
	/**
	 * @brief Place un navire dans une case spécifiée de la grille.
	 *
	 * @param x Coordonnée X de la case où placer le navire.
	 * @param y Coordonnée Y de la case où placer le navire.
	 */
	void tir_modif_case(int x, int y);
	string m_tab[10][10];
};