#include "liste.h"
liste::liste(int n)
{
    nbMax=n;
    nb=0;
    element=new Base*[nbMax];
}

 liste::~liste()
{
 if(element) delete [] element;
}
 void liste::ajouter(Base* b){
    if(nb>=nbMax){
        cout<<"pleine"<<endl;
        return ;
    }
    element[nb++]=b;

 }
void liste::afficher(){
    for(int i=0;i<nb ;i++){
        element[i]->afficher();
    }

}