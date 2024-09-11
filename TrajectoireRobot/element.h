#ifndef ELEMENT_H
#define ELEMENT_H

class Element
{
public:
    Element();
    virtual ~Element();
    virtual void afficher() = 0;

protected:
};

#endif // ELEMENT_H
