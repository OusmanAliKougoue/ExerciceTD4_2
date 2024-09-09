#include"entreprise.h"
entreprise::entreprise(int id,string& nm,individu& d ,int n):directeur(d)
{
     cout<<"\nAppelle du constructeur pour la classe entreprise adr="<<this<<endl;
    identifiant=id;
    nom=nm;
    nbmax=n;
    tab=new employe*[nbmax];
    for(int i=0; i< nbmax;i++){
        tab[i]=nullptr;
    }
}
entreprise::~entreprise()
{
     cout<<"\nAppelle du destructeur pour la classe entreprise adr="<<this<<endl;
     if(tab){
        for(int i=0; i< nbmax;i++){
            if(tab[i])
             delete  []tab[i];
    }
    delete [] tab;
  }
}
void entreprise::ajouter(employe& e){
    tab[nbmax++]=new employe(e);
}
void entreprise::afficher(){
    cout<<"id entreprise:"<<identifiant<<endl;
    cout<<"nom entreprise :"<<nom<<endl;
    directeur.afficher();cout<<endl;
    cout<<"-------------les salaries-----------------"<<endl;
   for(int i=0; i< nbmax;i++){
        if(tab[i]!=nullptr){
            tab[i]->afficher();
        }
    }
}