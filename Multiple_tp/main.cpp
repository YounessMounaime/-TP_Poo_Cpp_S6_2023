#include <iostream>
#include"Cpp:../../multiple.h"
using namespace std;

int main()
{
    point p(3, 4);
    cout<<"     -----Point-----    "<<endl;
    p.afficher();
    p.changer_coord(5, 6);
    p.afficher();
    figure f("rouge", 2);
    cout<<"     -----figure-----    "<<endl;
    f.afficher();
    f.changer_clr("bleu");
    f.changer_ep(3);
    f.afficher();
    cout<<"     -----cercle-----    "<<endl;
    cercle c(1, 2, "vert", 1, 5.0);
    c.afficher();
    c.changer_ra(7.0);
    c.afficher();
    cylindre cy(0, 0, "jaune", 1, 3.0, 10.0);
    cy.afficher();
    return 0;
}
