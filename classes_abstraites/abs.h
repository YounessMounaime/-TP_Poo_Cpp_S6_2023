#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

class Client{
protected :
    string nom , CIN ;
    int Montant_totale;
public:
    Client();
    Client(string , string , int);
    virtual int get_montant()=0 ;
    virtual void  afficher()=0;
    string get_cin(){
    return CIN;
    }
        string get_nom(){
    return nom;
    }
           int get_M(){
    return Montant_totale;
    }
};

class ClientComptant: public Client {
public:
   ClientComptant();
   ClientComptant(string , string , int);
   int get_montant();
    void  afficher();
};
class ClientCredit:public Client{
protected:
    int montant_M;
    int montant_MF;
    int nbr;
public :
    int get_montant();
    ClientCredit(string , string , int , int , int , int );
     void  afficher();
};

class societe{
protected:
    string nom;
    Client **liste_c;
    int nbr_c;
public:
    societe();
    societe(Client **cl , int nbb);
    void operator+=(Client* c);
     void  afficher_c();
     string operator[](string numero);
     int totale();

};












