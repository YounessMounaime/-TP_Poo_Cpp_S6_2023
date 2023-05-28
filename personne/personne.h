#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
class Personne{
protected:
    int id;
    string nom , prenom;
    int age;
public:
    Personne();
    Personne(int,string,string);
    void afficher();
};
class Etudiant:virtual public Personne{
protected:
    string cycle , classe;
    int classment;
public:
    Etudiant();
    Etudiant(int , string, string , string ,string, int);
    void afficher();
};
class Enseignant:virtual public Personne{
protected:
    float salaire;
    int nbr_h;
public:
    Enseignant();
    Enseignant(int , string , string , float , int);
    void afficher();
    void ajoutPrime(int pr);
};
class Doctorant:public Etudiant , Enseignant{
protected:
    int prix_h;
public:
    Doctorant();
    Doctorant(int,string,string,string , string , int,float , int,int);
    void afficher();
    float calcule_sal();
};

