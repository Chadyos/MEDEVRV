#pragma once
#include <iostream>
using namespace std;

class Jeu {
private : 
    int gagnant;
    int nbTours ; 
public :
    void tourDeJeu ();
    void setNbTour (int n);
    int getNbTour ();
    void setGagnant (int n);
    int getGagnant ();
    pair<int, int> genererCoord (Grille grille);
};
