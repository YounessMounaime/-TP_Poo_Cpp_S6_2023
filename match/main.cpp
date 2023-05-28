#include <iostream>
#include"Cpp:../../match.h"
using namespace std;

int main()
{
     MatchFoot M1;
      MatchFoot M2("France","Bresille",0,0);
      MatchFoot M3("Maroc","niger",2,0);
      MatchFoot M4(M2);
      M2.marquerBut("A");
      M2.marquerBut("B");
      M2.afficher();
        M3.afficher();
        if(M2.comparer()==1){cout<<"Le "<<M2.getEA()<<" est l equipe gagnante"<<endl;}
        else if(M2.comparer()==-1){cout<<"Le "<<M2.getEB()<<" est l equipe gagnante"<<endl;}
        else{cout<<"Match null"<<endl;}
                if(M3.comparer()==1){cout<<"Le "<<M3.getEA()<<" est l equipe gagnante"<<endl;}
        else if(M3.comparer()==-1){cout<<"Le "<<M3.getEB()<<" est l equipe gagnante"<<endl;}
        else{cout<<"Match null"<<endl;}
    return 0;
}




