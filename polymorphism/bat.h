#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

  class batiment{
    protected :
       string adresse;
        int superficie;
        int prix;
     public :
        batiment(){adresse="";}
        batiment(string adr , int sup , int px);
      virtual  void affichage();
       virtual float calcule_px();
};
  class maison:public batiment{
  protected :
      int nb_pieces;
      bool jardin_exist;
      int superficie_jard;
  public:
    maison():batiment(){nb_pieces=0;}
    maison(string adr , int sup , int px , int nbp , bool je , int sj);
    void affichage();
      float calcule_px();
  };
