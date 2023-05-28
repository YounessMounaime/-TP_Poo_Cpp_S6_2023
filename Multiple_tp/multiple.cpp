#include"Cpp:../../multiple.h"
point::point(){
    ord = abs = 0;
}
point::point(int a , int o){
    abs = a;
    ord = o;
 }
 void point::afficher(){
    cout<<"Abscisse : "<<abs<<endl;
    cout<<"Ordonne : "<<ord<<endl;
 }
 void point::changer_coord(int x , int y){
                   abs = x;
                   ord = y;
        }
figure::figure(){
 coleur="";
 ep=0;
}
figure::figure(string cl , int e){
coleur=cl;
ep = e;
}
void figure ::changer_clr(string cl ){
     coleur = cl;
}
void figure ::changer_ep( int e){
     ep = e;
}
void figure::afficher(){
 cout<<"Couleur : "<<coleur<<endl;
 cout<<"Epaisseur : "<<ep<<endl;

}
   cercle::cercle():point(),figure(){
      rayon = 0;
  }
    cercle::cercle(int aa , int oo , string cc, int ee, float r):point(aa , oo),figure(cc , ee){
      rayon = r;
  }
  void cercle::changer_ra(float rr ){
  rayon = rr;
  }
  void cercle::afficher(){
     point::afficher();
     figure::afficher();
  cout<<"Rayon :"<<rayon<<endl;
  }

  cylindre::cylindre():cercle(){
      haut = 0;
  }
    cylindre::cylindre(int aa , int oo , string cc, int ee, float r , float h):cercle(aa,oo,cc,ee,r){
      haut = h;
  }
 void cylindre::afficher(){
 cercle::afficher();
 cout<<"Hauteur : "<<haut;
 }









