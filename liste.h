#ifndef LISTE_H
#define LISTE_H
#include "base.h"
#include "individu.h"
#include"employe.h"
#include"entreprise.h"
#include <iostream>
using namespace std;
class liste
{
private:
    int nb;
    int nbMax;
    Base ** element;
public:
    liste(int );
    virtual ~liste();
    void ajouter(Base* b);
    void afficher();
};
#endif