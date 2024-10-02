//#include <QCoreApplication>
#include <QtGlobal>
#include "code.h"
#include <iostream>

using namespace std;

#define TAILLE_CODE 4

int main(int argc, char *argv[])
{

    char choix;
    quint8 combinaison[TAILLE_CODE];
    Code leCode(TAILLE_CODE);

    cout << " Voulez vous modifier le code O/N : ";
    cin >> choix;

    if(choix == 'O' || choix == 'o'){
        cout << "Entrez le nouveau code à 4 chiffres";
            for(int i = 0; i < TAILLE_CODE; i++){
            cin >> combinaison[i];
        }
    }


    return 0;

    /*
    QCoreApplication a(argc, argv);

    return a.exec();
    */
}
