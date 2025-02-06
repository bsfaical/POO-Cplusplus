#include <iostream> 
#include <string> 
#include <vector>
#include "Disciplina.hpp"
using namespace std;

// Função genérica
template <class T>
void Exibe (const T& Col, string Opc = "") {
    typename T::const_iterator Pos; 
    if(Opc.length()) cout << endl << Opc << endl; 
    for (Pos = Col.begin(); Pos != Col.end(); ++Pos) 
        cout << **Pos; 
        
}