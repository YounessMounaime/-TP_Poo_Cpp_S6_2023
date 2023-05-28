#include"Cpp:../../personne.h"
int main()
{
    Etudiant e(1, "Mounaime", "Youness", "IIR", "G2", 1);
    Enseignant ens(3, "saiid", "saiid", 11111, 16);
    Doctorant d(4, "oumaima", "oumaima", "Doctorat", "B", 1, 20000, 12, 500);
    cout << "----------------------" << std::endl;
    e.afficher();
    cout << "----------------------" << std::endl;
    ens.afficher();
    cout << "----------------------" << std::endl;
    d.afficher();
    return 0;
}
