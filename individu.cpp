#include "individu.h"
individu::individu(string& nm,string& prnom,int ident)
{
    cout<<"\nAppelle du constructeur pour la classe Individu adr="<<this<<endl;
   nom=nm;
   prenom=prnom;
   id=ident;
}

individu::~individu()
{
    cout<<"\nappel du destructeur pour individu adr="<<this<<endl; 
}
int individu::clef(){
    return id;
}
void individu::afficher(){
   
    cout<<"identifiant :"<<id<<endl;
    cout<<"nom :"<<nom<<endl;
    cout<<"prenom :"<<prenom<<endl;
    
}