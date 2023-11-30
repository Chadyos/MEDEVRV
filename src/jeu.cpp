#include <iostream>
#include "jeu.h"
#include "joueur.h"
#include "grille.h"
using namespace std;

void Jeu::tourDeJeu () {
    srand(time(0));
    int nbJoueur, nbBateaux;
    cout << "rentrer le nombre de joueur" << endl;
    cin << nbJoueur;
    while (nbJoueur != 1 || nbJoueur !=2) {
        cout << "rentrer le bon nombre" << endl;
        cin nbJoueur;
    }
    cout << "rentrer le nombre de bateaux" << endl;
    cin << nbBateaux;
    while (nbBateaux > 5 && nbBateaux < 1) {
        cout << "rentrer le bon nombre de bateaux" << endl;
        cin << nbBateaux; 
    }
    joueur1 = new Joueur ();
    joueur2 = new Joueur ();
    joueur1.init (nbBateaux);
    if (nbJoueur == 2) {
        joueur2.init (nbBateaux);
    }
    else { joueur2.initAuto (nbBateaux)}
    int x, y;
    for (;;) {
        int n = getNbTour ();
        this -> setNbTour (n+1);
        cout << "joueur 1, a toi de jouer" << endl;
        cout << "entre x" << endl;
        cin << x;
        cout << "entre y" << endl;
        cin << y;
        joueur2.estTouche (x, y);
        if (joueur2.ff ()) {
            this -> setGagnant (1);
            break;
        }
        if (nbJoueur == 2) {
            cout << "joueur 2, a toi de jouer" << endl;
            cout << "entre x" << endl;
            cin << x;
            cout << "entre y" << endl;
            cin << y;
            joueur1.estTouche (x, y);
        }
        else {
            x,y = this -> genererCoord ();
            joueur1.estTouche (x,y);
        }
        if (joueur1.ff ()) {
            setGagnant (2);
            break;
        }
    }
    cout << "Bravo au joueur " << this -> getGagnant () << "d'avoir gagne" <<endl; 
}

void Jeu::setNbTour (int n) {
    nbTours = n;
    return ;
}

int Jeu::getNbTour () { 
    return nbTours;
}

void Jeu::setGagnant (int n) {
    gagnant = n;
    return ;
}

int Jeu::getGagnant () { 
    return gagnant;
}

<int, int> Jeu::genererCoord (Grille grille) {
    int row, col;
        do {
            // Génération aléatoire de la position
            row = std::rand() % 10;
            col = std::rand() % 10;
        } while (grille[row][col] == 'X' || grille[row][col] == 'T');
    return row, col;
}