#ifndef ELEMENT_H
#define ELEMENT_H

class Element
{
public:
    Element();
    virtual ~Element();
    virtual void afficher() = 0;
    virtual int getNumero();      //accesseur --> récupérer le contenu de l'attribut numero
    virtual void setNumero();      //mutateur --> modification de l'attribut numero

protected:
    int numero;
    int vitesse;
};

#endif // ELEMENT_H
