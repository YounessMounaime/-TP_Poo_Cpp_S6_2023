#include <iostream>
#include"Cpp:../../abs.h"
using namespace std;

int main()
{
    ClientComptant clientComptant("Client1", "12345", 1000);
    cout << "Montant total (ClientComptant): " << clientComptant.get_montant() << endl;
    ClientCredit clientCredit("Client2", "67890", 2000, 500, 300, 2);
    cout << "Montant total (ClientCredit): " << clientCredit.get_montant() << endl;
    societe company;
    company += &clientCredit;
    company += &clientComptant;
    company.afficher_c();
    int totalAmount = company.totale();
    cout << "Montant total (societe): " << totalAmount << endl;
}
