#ifndef ENTREPRISE_H
#define ENTREPRISE_H
#include "individu.h"
#include "employe.h"
#include <iostream>
class entreprise
{
private:
    int identifiant;
    string nom;
    individu directeur;
    int nbmax;
    employe** tab;
public:
    entreprise(int ,string&,individu& d,int);
    ~entreprise();
    void ajouter(employe&);
    void afficher();
    int clef();
};
#endif