#ifndef EMPLOYE_H
#define EMPLOYE_H
#include "individu.h"
#include <iostream>
using namespace std;
class employe :public individu
{
private:
    string competence;
public:
    employe(string& nm,string& prnom,int ident,string& compt);
    ~employe();
     void afficher();
    int clef();
};
#endif