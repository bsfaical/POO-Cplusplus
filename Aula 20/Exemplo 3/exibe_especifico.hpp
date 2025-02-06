#include <iostream> 
#include <string> 
#include <vector>
#include "Disciplina.hpp"
using namespace std;

// Função específica
void ExibeV (const vector<Disciplina*>& Col, string Opc = "") { 
    vector<Disciplina*>::const_iterator PosV; 
    if(Opc.length()) cout << endl << Opc << endl;
    for(PosV = Col.begin(); PosV != Col.end(); ++PosV)
        cout << **PosV; 
}