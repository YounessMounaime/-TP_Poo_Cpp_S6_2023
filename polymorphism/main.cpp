#include"Cpp:../../bat.h"


int main()
{
    /************** dynamique ************************/
     cout<<"   *****************************   Typage dynamique   *****************************   "<<endl;
         batiment* B[3];
            B[0] = new batiment("RABAT-AGDAL", 200, 1000);
            B[1] = new maison("FES--FES_Jdid", 300, 1500, 6, true, 100);
            B[2] = new batiment("RABAT-HASSAN", 150, 800);
                for (int i = 0; i < 3; i++) {
                      B[i]->affichage();
                     cout << "Prix total : " <<B[i]->calcule_px() << " DH" << endl;
    }
     /**************  statique ************************/

    cout<<"   *****************************   Typage Statique  *****************************   "<<endl;

           batiment b1("RABAT-AGDAL", 200, 1000);
           maison m1("FES--FES_Jdid", 300, 1500, 6, true, 100);
               b1.affichage();
          cout << "Prix total : " << b1.calcule_px() << " DH "<< endl;
               m1.affichage();
          cout << "Prix total : " << m1.calcule_px() << " DH" << endl;



}
