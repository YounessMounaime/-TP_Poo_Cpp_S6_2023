#include"Cpp:../../match.h"
MatchFoot::MatchFoot(){
    EA=EB="";
    nba=nbb=0;}

  MatchFoot::MatchFoot(string EAA,string EBB,int nbaa,int nbbb){
        EA=EAA;
        EB=EBB;
        nba=nbaa;
        nbbb=nbb;}

        MatchFoot::MatchFoot( const MatchFoot&M){
                     EA= M.EA;
                     EB = M.EB;
                     nba = M.nba;
                     nbb = M.nbb;
                    }
        string MatchFoot::getEA(){return EA;}
       string MatchFoot::getEB(){return EB;}
        int MatchFoot::getnba(){return nba;}
      int MatchFoot::getnbb(){return nbb;}
      void MatchFoot::setEA(string EAA){ EA=EAA;}
      void MatchFoot::setEB(string EBB){ EB=EBB;}
      void MatchFoot::setnba(int nbaa){ nba=nbaa;}
    void MatchFoot::setnbb(int nbbb){ nbb=nbbb;}
    void MatchFoot::afficher(){cout<<"Equipe A : "<<EA<<endl<<"Equipe B : "<<EB<<endl<<"Nbr buts A : "<<nba<<endl<<"Nbr Buts B : "<<nbb<<endl;}
       void MatchFoot::marquerBut(string eq){
           if(eq =="A"){nba++;}
            if(eq=="B"){nbb++;}}
        int MatchFoot::comparer(){
            if(nba>nbb){return 1;}
            else if(nba<nbb){return -1;}
            else  {return 0;}}


            chamionnant::chamionnant(){
                tabeEqPts[0][0] = "";
                tabeEqPts[0][1] = "";
                tabeEqPts[1][0] = "";
                tabeEqPts[1][1] = "";
    }

            void chamionnant::AjouerMatch(MatchFoot ml)  {
           if (nbrmatch < 80) {
                tabM[nbrmatch] = ml;
                          nbrmatch++;
           }
           else {
             cout << "Error le max des match  est 40" << endl;
            }
        }
void chamionnant::ListeEquipe() {
    int index = 0;
    for (int i = 0; i <=nbrmatch; i++) {
        string eqA = tabM[i].getEA();
        string eqB = tabM[i].getEB();
        bool eqA_exist = false;
         bool eqB_exist = false;
        for (int j = 0; j < index; j++) {
            if (tabeEqPts[j][0] == eqA) {
                eqA_exist = true;

            }
            if (tabeEqPts[j][0] == eqB) {
                eqB_exist = true;

            }
        }
        if (eqA_exist == false) {
            tabeEqPts[index][0] = eqA;
            index++;
        }


        if (eqB_exist == false) {
            tabeEqPts[index][0] = eqB;
            index++;
        }
    }
}


 int chamionnant::pointParEquipe(string eq){
    int points = 0;
    for(int i=0 ; i<nbrmatch ; i++){
        if(tabM[i].getEA() == eq){
            if(tabM[i].comparer() == 1){
                points += 3;
            }
            else if(tabM[i].comparer() == 0){
                points += 1;
            }

        }
        else if(tabM[i].getEB() == eq){
            if(tabM[i].comparer() == -1){
                points += 3;
            }
            else if(tabM[i].comparer() == 0){
                points += 1;
            }
        }
    }
    return points;}

 void chamionnant::calculenbrpts() {
      for(int i=0; i<10; i++){
        string eq = tabeEqPts[i][0];

            int points = pointParEquipe(eq);
            tabeEqPts[i][1] = to_string(points);

    }
}


 void chamionnant::AfficheResult(){
	int t=0;
	for(int i=0;i<10;i++){
		if(tabeEqPts[i][0]!=""){
			t++;
		}
	}

	for(int i=0;i<t;i++){
		cout<< tabeEqPts[i][0]<<" -> ";
		cout<< tabeEqPts[i][1]<<endl;
	}
}







