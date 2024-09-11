#include "trajectoire.h"
#include <iostream>

using namespace std;

Trajectoire::Trajectoire(int _nbEtapesMax):
    nbEtapesMax(_nbEtapesMax),
    prochaineEtape(0)

{
    parcours = new Element * [nbEtapesMax];         //tableau dynamique
}

Trajectoire::~Trajectoire()
{
    delete parcours;
}

bool Trajectoire::ajouter(Element *_pElement)
{
    bool retour = true;
    if(prochaineEtape < nbEtapesMax)
        parcours[prochaineEtape++] = _pElement;
    else
        retour = false;
    return retour;
}

void Trajectoire::afficher()
{
    cout << "Trajectoire :" << endl;
    cout << endl;

    for (int indice = 0; indice < prochaineEtape; ++indice) {
        parcours[indice]->setNumero();
        cout << "(" << parcours[indice]->getNumero() << ")" << "Trajectoire :" << endl;
    }

}
//TD page 3 vecteur à la place de string
