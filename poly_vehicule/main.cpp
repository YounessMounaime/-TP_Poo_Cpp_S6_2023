#include <iostream>
#include"Cpp:../../veh.h"
using namespace std;

int main()
{
    camion monCamion(80.0, 0.2, 8, 5000.0);
    monCamion.affiche();
    Vehicule* v = &monCamion;
    cout<<"Vitesse max : "<<monCamion.Max_vitesse()<<endl;
    return 0;
}
