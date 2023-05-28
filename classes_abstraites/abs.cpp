#include"Cpp:../../abs.h"

Client::Client(){
CIN="";
nom="";
Montant_totale=0;
}

Client::Client(string n , string c , int mt){
nom = n;
Montant_totale = mt;
CIN=c;
}

ClientComptant::ClientComptant():Client(){}
ClientComptant::ClientComptant(string n , string c , int mt):Client(n,c,mt){}

int ClientComptant::get_montant() {
    return Montant_totale;
}
void ClientComptant::afficher(){
cout<<"Nom : "<<nom<<endl;
}


int ClientCredit::get_montant() {
    int montant_total = Montant_totale + montant_M - montant_MF;
    return montant_total;
}

ClientCredit::ClientCredit(string n , string c , int mt , int mm , int mf, int nn ):Client(n,c,mt){
   montant_M = mm;
   montant_MF = mf;
   nbr = nn;

}
void ClientCredit::afficher(){
cout<<"Nom : "<<nom<<endl;
}

  societe::societe(){
      nbr_c = 0;
    }





void societe::operator+=(Client* c) {
        if(nbr_c==0)
				{
					liste_c=(Client**)malloc(sizeof(Client));
				}
				else{

         liste_c = (Client**)realloc(liste_c , (nbr_c + 1) * sizeof(Client*));}
           if(liste_c !=NULL){
               liste_c [nbr_c] = c;
            nbr_c++;
        } else {
            cout << "Eroor : L'allocation de memoire a echoue" << endl;
        }
}

 void societe::afficher_c() {
        cout << "    ****    La liste des Clients   ****    " << endl;
        for (int i = 0; i < nbr_c; i++) {
             liste_c[i]->afficher();
        }
    }

string societe::operator[](string numero){
            for (int i = 0; i < nbr_c; i++) {
                 if(liste_c[i]->get_cin()== numero){
                    return liste_c[i]->get_nom();
                 }
                 else{
                    return "pas trouve";
                 }
        }

}

int societe::totale(){
  int t=0;
       for (int i = 0; i < nbr_c; i++) {
             t+=liste_c[i]->get_montant();
        }
        return t;

}













