#include "jeu.h"
using namespace std;

int main()
{

int main() {
    // Créer une instance de votre jeu
    Jeu jeu;

    // Initialiser le jeu (charger les joueurs, les navires, la grille, etc.)
    jeu.initialiser();

    // Commencer le jeu
    jeu.jouer();

    return 0;
}
}