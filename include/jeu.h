#pragma once
#include <iostream>
using namespace std;

Class Jeu {
private : 
    int gagnant;
    int nbTours
public :
    void tourDeJeu ();
    void setNbTour (int n);
    int getNbTour ();
    void setGagnant (int n);
    int getGagnant ();
}
