#include"Cpp:../../doc.h"
int static NE = 1;
     doc::doc(){
     code=0;
     }
     doc::doc(int c ,string ti , float px){
         code = c;
        titre = ti;
        prix = px;
        NE++;
 }
     string doc::get_titre(){
          return titre;
 }
    float  doc::get_prix(){
           return prix;
 }
    int doc::get_code(){
         return code;
    }
    bool doc::operator==(doc d){
    if(code == d.code){
        return true;
    }
    return false;
    }
      bool doc::operator<(doc d){
    if(code <d.code){
        return true;
    }
    return false;
    }

   float doc::solder(int ps){
         float d;
         d = prix - ((prix*ps)/100);
         return d;
    }
     ostream& operator<<(ostream& os, const doc D){
	    os<<"Code : "<<D.code<<endl;
	    os<<"Titre : "<<D.titre<<endl;
	     os<<"Prix : "<<D.prix<<endl;
	     return os;
    }

    livre::livre():doc(){
        auteur="";
        nbr_p=0;
    }
    livre::livre(int c , string ti , float px ,string au , int nbr):doc(c,ti,px){
                auteur=au;
                nbr_p=nbr;
                 }


   ostream& operator<<(ostream& os, const livre l){
	    os<<"Code : "<<l.code<<endl;
	    os<<"Titre : "<<l.titre<<endl;
	     os<<"Prix : "<<l.prix<<endl;
	     os<<"Auteur : "<<l.auteur<<endl;
	     os<<"Nombre des pages  : "<<l.nbr_p<<endl;
	     return os;
    }


dict::dict():doc(){
        langue="";
        nbr_to=0;
    }
    dict::dict(int c , string ti , float px ,string lg , int nbr):doc(c,ti,px){
                langue=lg;
                nbr_to=nbr;
                 }


   ostream& operator<<(ostream& os, const dict d){
	    os<<"Code : "<<d.code<<endl;
	    os<<"Titre : "<<d.titre<<endl;
	     os<<"Prix : "<<d.prix<<endl;
	     os<<"Langue : "<<d.langue<<endl;
	     os<<"Nombre   : "<<d.nbr_to<<endl;
	     return os;
    }


    col_livre::col_livre(livre *ll , int tt ,  string *rr){
        taille_cl = tt;
        nl = 0;
        cl=(livre*)malloc(taille_cl*sizeof(livre));
         res = (string*)malloc(taille_cl*sizeof(string));
        for(int i=0;i<taille_cl;i++){
                new(cl+i)livre;
            cl[i]=ll[i];
          new(res+i)string;
            res[i]=rr[i];

        }



    }


ostream& operator<<(ostream& os, const col_livre& C){
	livre L;
	for(int i=0;i<C.taille_cl;i++){
		for(int j=i+1;j<C.taille_cl;j++){
			if(C.cl[i].get_code()>C.cl[j].get_code()){
				L=C.cl[i];
				C.cl[i]=C.cl[j];
				C.cl[j]=L;
			}
		}

	}
	for(int i=0;i<C.taille_cl;i++){
		os<<C.cl[i].get_code()<<" "<<C.cl[i].get_titre()<<"          ==>  "<<C.res[i]<<endl;
	}

  return os;
}








  bool col_livre::verfie_code(int cc){
     for(int i=0;i<taille_cl;i++){
        if(cl[i].get_code()==cc){
                return 1;}
     }
         return 0;
  }
  void col_livre::add_livre(livre l){
    if(verfie_code(l.get_code())!=0){
        cout<<"Error";}
        else{
     cl=(livre*)realloc(cl , (taille_cl+1)*sizeof(livre));
     res=(string*)realloc(res,(taille_cl+1)*sizeof(string));
     new(cl+taille_cl)livre;
     new(res+taille_cl)string;
     cl[taille_cl]=l;
     res[taille_cl]="L";
     taille_cl++;
        }
  }

 livre col_livre::recherche(int code_l){
        for(int i=0;i<taille_cl;i++){
            if(cl[i].get_code()==code_l){
                return cl[i];
            }

        }


  }

void col_livre::reserve(int lr){
     //  livre ll=recherche(lr);
       for(int i=0;i<taille_cl;i++){
        if(cl[i].get_code()==lr){
            res[i]="R";
            break;
        }
       }
}






