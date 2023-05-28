#include"Cpp:../../personne.h"

 Personne::Personne(){
id=0;
}
Personne:: Personne(int i, string n, string p){
    id = i;
    nom = n;
    prenom = p;
}
void Personne::afficher(){
        cout << "ID: " << id << endl;
        cout << "Nom: " << nom << endl;
        cout << "Prénom: " << prenom << endl;
        cout << "Age: " << age << endl;
}
Etudiant::Etudiant():Personne(){
cycle = "";
}
 Etudiant::Etudiant(int i, string n, string p, string c, string cl, int cls):Personne(i,n,p){
      cycle = c;
      classe = cl;
     classment= cls;
}
void  Etudiant::afficher(){
        Personne::afficher();
        cout << "Cycle: " << cycle << endl;
        cout << "Classe: " << classe << endl;
        cout << "Classement: " << classment << endl;
 }
 Enseignant:: Enseignant():Personne(){}

 Enseignant:: Enseignant(int i, string n, string p, float s, int h):Personne(i,n,p){
       salaire= s;
       nbr_h=h;
}
void Enseignant::afficher(){
        Personne::afficher();
        cout << "Salaire: " << salaire << endl;
        cout << "Nombre d'heures: " << nbr_h << endl;
 }

 void Enseignant::ajoutPrime(int pr){ salaire += pr;}
 Doctorant::Doctorant():Etudiant(),Personne(){}
 Doctorant:: Doctorant(int i, string n, string p, string c, string cl, int cls, float s, int h, int ph):Personne(i, n, p), Etudiant(i, n, p, c, cl, cls),Enseignant(i, n, p, s, h){
 prix_h = ph;
 }
 void Doctorant::afficher(){
    Personne::afficher();
        cout << "Cycle: " << cycle << endl;
        cout << "Classe: " << classe << endl;
        cout << "Classement: " << classment << endl;
        cout << "Salaire: " << salaire << endl;
        cout << "Nombre d'heures: " << nbr_h << endl;
        cout << "Prix par heure: " << prix_h << endl;
 }
 float Doctorant::calcule_sal(){   return salaire * nbr_h;}













