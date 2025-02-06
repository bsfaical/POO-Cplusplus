#include <iostream>
#include "Disciplina.hpp"
#include "exibe_especifico.hpp"
#include "exibe_generico.hpp"


using namespace std;

int main() {
    vector <Disciplina*> Disciplinas;
    Disciplinas.push_back(new Disciplina(155,"LOO" )); 
    Disciplinas.push_back(new Disciplina(156,"PE1" )); 
    Disciplinas.push_back(new Disciplina(157,"PE2" )); 

    ExibeV(Disciplinas, "Disciplinas da matricula"); 

    Exibe(Disciplinas, "Disciplinas da matricula");



    // vector <int*> inteiros;
    // inteiros.push_back(new int(155 )); 
    // inteiros.push_back(new int(643 )); 
    
    // Exibe(inteiros, "Inteiros");
    
    return 0;
}
