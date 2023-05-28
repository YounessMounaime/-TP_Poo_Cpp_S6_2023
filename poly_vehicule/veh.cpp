#include"Cpp:../../veh.h"

Vehicule::Vehicule(){
  *vitesseLimit=*cx=*nbrRoue=0;
}

   void Vehicule::affiche(){
     cout<<"Vitesse : "<<*vitesseLimit<<endl<<"Coeff : "<<*cx<<endl<<"Nbr roue : "<<*nbrRoue<<endl;
 }
 Vehicule::Vehicule(float vi , float ccxx , int nr){
     vitesseLimit = new float;
     cx = new float;
     nbrRoue = new int ;
     *vitesseLimit = vi;
     *cx = ccxx;
     *nbrRoue = nr ;
 }
 Vehicule::~Vehicule(){
      delete vitesseLimit;
      delete cx;
      delete nbrRoue;
 }

   voiture::voiture(){
        *nbrRoue = 4;
   }
   voiture::voiture(float vi , float ccxx ,int nr ):Vehicule(vi,ccxx , nr =4){}

   float voiture::Max_vitesse(){
       return (1- *cx) *  (*vitesseLimit / *nbrRoue);
   }

    void voiture::affiche(){
     cout<<"    ----    Voiture    ----    "<<endl<<"Vitesse : "<<*vitesseLimit<<endl<<"Coeff : "<<*cx<<endl<<"Nbr roue : "<<*nbrRoue<<endl;
 }

 camion::camion(float vi , float ccxx ,int nr , float ch ):Vehicule(vi,ccxx , nr ){ charge = ch; }

  void camion::affiche(){
     cout<<"    ----    Camion    ----    "<<endl<<"Vitesse : "<<*vitesseLimit<<endl<<"Coeff : "<<*cx<<endl<<"Nbr roue : "<<*nbrRoue<<endl;
     cout<<"Marchandises charges :  "<<charge<<endl;
 }

 float camion::Max_vitesse(){
       return 2*(1- *cx) *  (*vitesseLimit / *nbrRoue) * charge;
   }






