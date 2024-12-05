#include <iostream>
#include "carro.h"
// #include "carro_implementacao.h"

using namespace std;

Carro::Carro(){
    cor_predominante = "";
    ano_fabricacao = 1908;
}

string Carro::get_cor(){
    return cor_predominante;
}


int main(){
    Carro *car = new Carro();

    delete car;
}