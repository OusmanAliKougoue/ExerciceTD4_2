#include "employe.h"
employe::employe(string& nm,string& prnom,int ident,string& compt):individu(nm,prnom,ident)
{
   cout<<"\nAppelle du constructeur pour la classe employe adr="<<this<<endl;
    competence=compt;

}
employe::~employe()
{
    cout<<"\nappel du destructeur pour employe adr="<<this<<endl; 
}
void employe::afficher(){
    individu::afficher();
    cout<<"competence :"<<competence<<endl;
}
int employe::clef(){
 return individu::clef();
}
