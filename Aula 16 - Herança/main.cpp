#include <iostream>
#include "carro.hpp"

using namespace std;


int main(){
    Carro *carro = new Carro("Chevrolet", "S10", "preta", 2011);

    // Acessando metodo publico da classe derivada
    cout << carro->get_marca() << endl;

    // Acessando metodo publico da classe base
    cout << carro->get_ano() << endl;

    // Acessando metodo privado da classe derivada
    // carro->limpa_marca();

    // Acessando metodo privado da classe base
    // carro->limpa_cor();

    // Acessando metodo protected da classe derivada
    // carro->set_marca("Fiat");


    delete carro;
}