#include <iostream>
#include"Cpp:../../doc.h"
using namespace std;

int main()
{
    doc d(10,"Doc A ",400);
   cout<<"-----------------------------Test partie 2----------------------------"<<endl;
   livre l1(1, "Les Miserables", 20.0, "Victor Hugo", 488);
    livre l2(2, "L'amour dure 3 ans", 15.0, "Frederic Beigbeder", 312);
    dict di(5, "Le Petit Larousse", 12.5, "francais", 20000);
    cout<<endl<<l1<<endl;
    cout<<endl<<l2<<endl;
    cout<<endl<<di<<endl;
    cout<<"-----------------------------Test partie 3----------------------------"<<endl;
     livre l3(3,"Le Rouge et le Noir",20.5,"Stendhal",120);
     livre tab_livre[3] = {l1, l2, l3};
    string res[3] = {"L", "L", "L"};
    col_livre cl(tab_livre, 3, res);
    cout<<endl<<"--------------- Test : affichage normale -----------------------------------------------"<<endl;
    cout<<cl;
    cout<<endl<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
    livre l4(4, "Le Seigneur des Anneaux", 250.0, "J.R.R. Tolkien", 700);
    cl.add_livre(l4);
    cout<<endl<<"--------------- Test : Apres l'ajout de livre avec le code 4 ---------"<<endl;
    cout<<cl;
   cout<<endl<<"--------------- Test : Apres la resrvation ----------------------------------------- ---------"<<endl;
    cout << "Reservation du livre avec code 1 et 4 :" << endl;
    cl.reserve(4);
     cl.reserve(1);
    cout << cl <<endl;

}


