#include <iostream>
using namespace std;
class MatchFoot{
   private:
       string EA,EB;
       int nba,nbb;
   public :
    MatchFoot();
    MatchFoot(string,string,int,int);
    MatchFoot(const MatchFoot&);
    string getEA();
    string getEB();
    int getnba();
    int getnbb();
    void setEA(string EAA);
    void setEB(string EBB);
    void setnba(int nbaa);
    void setnbb(int nbbb);
    void afficher();
    void marquerBut(string eq);
    int comparer();};
    class chamionnant{
    private:
        MatchFoot tabM[40];
        int nbrmatch ;
        string tabeEqPts[10][10];
    public:
        chamionnant();
        void AjouerMatch(MatchFoot ml);
        void ListeEquipe();
        int pointParEquipe(string eq);
        void calculenbrpts();
        void AfficheResult();
    };
