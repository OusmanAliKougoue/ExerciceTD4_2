
#include "base.h"
#include "individu.h"
#include"employe.h"
#include"entreprise.h"
#include"liste.h"
#include<iostream>
using namespace std;
int main(){
    cout<<"-----------------INDIVIDU-----------------"<<endl;
    string a="ousman";
    string b="ali";
    individu ind1(a,b,121);
    ind1.afficher();
    cout<<endl;
    cout<<ind1.clef()<<endl;
    cout<<endl;
    cout<<"-----------------EMPLOYE-----------------"<<endl;
    string c="saad";
    string d="mouaz";
    string comp="bureautique"; 
     employe e1(c,d,85,comp);
     e1.afficher();
     cout<<e1.clef()<<endl;;
     cout<<"-----------------ENTREPRISE-----------------"<<endl;
      string n1="zara";
     string m1="abdel";
     string comp1="diplomate"; 
     employe e2(n1,m1,1212,comp1);

     string n2="zaray";
     string m2="abdelhack";
     string comp2="pilote"; 
     employe e3(n2,m2,12122,comp2);
      
      string nomE="OAK";
      
      entreprise E(33,nomE,ind1,5);
      E.ajouter(e1);
      E.ajouter(e2);
      E.ajouter(e3);
      E.afficher();
      cout<<endl;

      cout<<"-----------------LISTE-----------------"<<endl;
      liste l(10);
      l.ajouter(&ind1);
      l.ajouter(&e2);
      l.afficher();
    
      return 0;

}