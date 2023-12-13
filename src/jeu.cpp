#include <iostream>
#include "jeu.h"
#include "joueur.h"
#include "grille.h"
using namespace std;

/**
 * @brief Méthode qui gère le déroulement d'un tour de jeu.
 * 
 * Cette méthode permet de gérer les actions effectuées lors d'un tour de jeu.
 * Elle demande le nombre de joueurs et le nombre de bateaux, initialise les joueurs,
 * puis effectue les actions de chaque joueur tour à tour jusqu'à ce qu'un joueur gagne.
 * 
 * @return void
 */
void Jeu::tourDeJeu () {
    srand(time(0));
    Grille grille;
    int nbJoueur, nbBateaux;
    cout << "rentrer le nombre de joueur" << endl;
    cin >> nbJoueur;
    while (nbJoueur != 1 && nbJoueur !=2) {
        cout << "rentrer le bon nombre" << endl;
        cin >> nbJoueur;
    }
    cout << "rentrer le nombre de bateaux" << endl;
    cin >> nbBateaux;
    while (nbBateaux > 5 || nbBateaux < 1) {
        cout << "rentrer le bon nombre de bateaux" << endl;
        cin >> nbBateaux; 
    }
    Joueur joueur1, joueur2;
    joueur1.init (nbBateaux);
    if (nbJoueur == 2) {
        joueur2.init (nbBateaux);
    }
    else { joueur2.initAuto (nbBateaux);}
    int x, y;
    for (;;) {
        int n = getNbTour ();
        this -> setNbTour (n+1);
        do {
            cout << "joueur 1, a toi de jouer" << endl;
            cout << "entre x" << endl;
            cin >> x;
            cout << "entre y" << endl;
            cin >> y;
        } while (grille.m_tab[x-1][y-1] == "X" || grille.m_tab[x-1][y-1] == "T");
        joueur2.estTouche (x-1, y-1);
        joueur2.afficheGrilleAdv();
        if (joueur2.ff ()) {
            this -> setGagnant (1);
            break;
        }
        if (nbJoueur == 2) {
            do {
                cout << "joueur 2, a toi de jouer" << endl;
                cout << "entre x" << endl;
                cin >> x;
                cout << "entre y" << endl;
                cin >> y;
            } while (grille.m_tab[x-1][y-1] == "X" || grille.m_tab[x-1][y-1] == "T");
            joueur1.estTouche (x-1, y-1);
            joueur2.afficheGrilleAdv();

        }
               else {
            do {
                x=genererCoord ();  
                y=genererCoord ();
            } while (grille.m_tab[x][y] == "X" || grille.m_tab[x][y] == "T");
            joueur1.estTouche (x,y);
            joueur1.afficheGrilleAdv();
        }
        if (joueur1.ff ()) {
            setGagnant (2);
            break;
        }
    }
    cout << "Bravo au joueur " << this -> getGagnant () << " d'avoir gagne" <<endl; 
}

/**
 * @brief Définit le nombre de tours du jeu.
 * 
 * @param n Le nombre de tours à définir.
 */
void Jeu::setNbTour (int n) {
    nbTours = n;
    return ;
}

/**
 * @brief Renvoie le nombre de tours du jeu.
 * 
 * @return Le nombre de tours du jeu.
 */
int Jeu::getNbTour () { 
    return nbTours;
}

/**
 * @brief Définit le gagnant du jeu.
 * 
 * @param n Le numéro du gagnant.
 */
void Jeu::setGagnant (int n) {
    gagnant = n;
    return ;
}

/**
 * @brief Renvoie le gagnant du jeu.
 * 
 * @return Le gagnant du jeu.
 */
int Jeu::getGagnant () { 
    return gagnant;
}

/**
 * Génère une coordonnée aléatoire entre 0 et 9.
 * 
 * @return La coordonnée générée.
 */
int Jeu::genererCoord () {
    int coord = std::rand() % 10;
    return coord;
}
