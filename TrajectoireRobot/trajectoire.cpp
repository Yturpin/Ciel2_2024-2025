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

}

void Trajectoire::afficher()
{
    cout << "Trajectoire :" << endl;
    cout << endl;
}
