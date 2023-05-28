#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

class Vehicule {
protected:
    float *vitesseLimit;
    float *cx;
    int *nbrRoue;
public :
    Vehicule();
    Vehicule(float vi , float ccxx , int nr);
   virtual void affiche();
    ~Vehicule();

};
  class voiture:public Vehicule{
public :
    voiture();
    void affiche();
     voiture(float vi , float ccxx ,int nr);
     float Max_vitesse();

  };
  class camion:public Vehicule{
   protected:
     float charge;
   public :
    camion(float vi , float ccxx , int nr, float ch);
     void affiche();
      float Max_vitesse();

  };
