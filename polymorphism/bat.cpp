#include"Cpp:../../bat.h"

   batiment::batiment(string adr , int sup , int px){
               adresse = adr ;
               superficie = sup ;
               prix = px;

   }
     void batiment::affichage(){
   cout<<"Adresse : "<<adresse<<endl;
   cout<<"Superficie : "<<superficie<<endl;
   cout<<"Prix par metre carre : "<<prix<<endl;
   }



   float batiment::calcule_px(){
        return prix * superficie;
   }

   maison::maison(string adr , int sup , int px , int nbp , bool je , int sj):batiment(adr,sup,px){
       nb_pieces = nbp;
       jardin_exist = je;
       superficie_jard = sj;
   }
      void maison::affichage(){
   cout<<"Adresse : "<<adresse<<endl;
   cout<<"Superficie : "<<superficie<<endl;
   cout<<"Prix par metre carre : "<<prix<<endl;
   cout<<"Nombre de pieces de la maison "<<nb_pieces<<endl;
   cout<<"Jardin : "<<jardin_exist<<endl;
   cout<<"Superficie de jardin : "<<superficie_jard<<endl;
   }

     float maison::calcule_px(){
        return (prix * superficie) + ((prix/2)*superficie_jard);
   }







