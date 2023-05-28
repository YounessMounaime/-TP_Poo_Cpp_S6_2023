#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
class point{
 protected:
     int abs;
     int ord;
 public:
    point();
    point(int a , int o);
    void afficher();
    void changer_coord(int , int );
};

class figure{
   protected:
       string coleur;
       int ep;
   public:
        figure();
        figure(string , int );
        void afficher();
        void changer_clr(string);
        void changer_ep(int);
};
class cercle:public point , public figure{
   protected:
       float rayon;
   public:
       cercle();
       cercle(int , int , string , int , float );
        void changer_ra(float );
        void afficher();

};
  class cylindre:public cercle{
   protected:
    float haut;
   public:
    cylindre();
    cylindre(int , int , string , int , float , float);
     void afficher();
  };

