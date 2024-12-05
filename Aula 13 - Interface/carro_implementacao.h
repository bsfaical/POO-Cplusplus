#include <iostream>
#include "carro.h"

using namespace std;

Carro::Carro(){
    cor_predominante = "";
    ano_fabricacao = 1908;
}

string Carro::get_cor(){
    return cor_predominante;
}