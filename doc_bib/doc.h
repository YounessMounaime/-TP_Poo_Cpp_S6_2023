#include <iostream>
using namespace std;
class doc{
 protected:
     int code;
     string titre;
     float prix;
 public:
     doc();
    doc(int c , string ti , float px);
    string get_titre();
    float get_prix();
    int get_code();
    bool operator ==(doc d);
    bool operator <(doc d);
    float solder(int ps);
    friend   ostream& operator<<(ostream& , const doc );
};

class livre:public doc{
  protected:
      string auteur;
      int nbr_p;
  public:
    livre();
    livre(int  , string , float ,string , int );
    friend ostream& operator<<(ostream& , const livre );
    string get_auteur(){return auteur;}
};
class dict:private doc{
  protected:
      string langue;
      int nbr_to;
  public:
    dict();
    dict(int  , string , float ,string , int );
    friend ostream& operator<<(ostream& , const dict );
};

class col_livre{
  private:
       livre *cl;
       int taille_cl;
       int nl;
      string *res;
   public:
   col_livre(){

   }
    col_livre(livre * , int , string * );
     void affichage();
     bool verfie_code(int);
     void add_livre(livre );
   livre recherche(int );
   void reserve(int );
    friend ostream& operator<<(ostream& os, const col_livre& C);
};






