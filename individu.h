#ifndef INDIVIDU_H
#define INDIVIDU_H
#include"base.h"
#include <iostream>

using namespace std;
class individu : public Base
{
private:
string nom;
string prenom;
int id;
public:
    individu(string& nm,string& prnom,int ident);
  ~individu();
  virtual void afficher();
  virtual int clef();

};
#endif