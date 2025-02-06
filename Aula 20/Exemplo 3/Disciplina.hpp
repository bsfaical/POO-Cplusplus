#ifndef _DISCIPLINA
#define _DISCIPLINA

#include <iostream> 
#include <string> 
#include <vector> 
using namespace std; 

class Disciplina {
    protected:
        long Codigo_;
        string Nome_;
    public:
        Disciplina (long CD, string No) : Codigo_(CD), Nome_(No) { }

        friend ostream &operator << (ostream &S, const Disciplina &D){ 
            S << "Disciplina: " << D.Codigo_ << '\t' << D.Nome_ << endl; 
            return S; 
        }
};

#endif
