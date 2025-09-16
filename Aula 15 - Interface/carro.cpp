#include <iostream>
#include "carro.hpp"

using namespace std;

Carro::Carro(){
    cor_predominante = "Verde";
    ano_fabricacao = 1908;
}

string Carro::get_cor(){
    return cor_predominante;
}