#pragma once
#include <iostream>
using namespace std;

class Jeu
{
private:
    int gagnant;
    int nbTours;

public:
    /**
     * @brief Méthode qui gère le déroulement d'un tour de jeu.
     *
     * Cette méthode permet de gérer les actions effectuées lors d'un tour de jeu.
     * Elle demande le nombre de joueurs et le nombre de bateaux, initialise les joueurs,
     * puis effectue les actions de chaque joueur tour à tour jusqu'à ce qu'un joueur gagne.
     *
     * @return void
     */
    void tourDeJeu();
    /**
     * @brief Définit le nombre de tours du jeu.
     *
     * @param n Le nombre de tours à définir.
     */
    void setNbTour(int n);
    /**
     * @brief Renvoie le nombre de tours du jeu.
     *
     * @return Le nombre de tours du jeu.
     */
    int getNbTour();
    /**
     * @brief Définit le gagnant du jeu.
     *
     * @param n Le numéro du gagnant.
     */
    void setGagnant(int n);
    /**
     * @brief Renvoie le gagnant du jeu.
     *
     * @return Le gagnant du jeu.
     */
    int getGagnant();
    /**
     * Génère une coordonnée aléatoire entre 0 et 9.
     *
     * @return La coordonnée générée.
     */
    int genererCoord();
};
