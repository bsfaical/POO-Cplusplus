#include <iostream>
#include "carro.hpp"

using namespace std;

Carro::Carro(string cor, int ano){
    cor_predominante = cor;
    ano_fabricacao = ano;
}

string Carro::get_cor(){
    return cor_predominante;
}