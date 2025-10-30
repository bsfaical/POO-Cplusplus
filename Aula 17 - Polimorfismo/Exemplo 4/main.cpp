#include <iostream>
#include "carro.cpp"

using namespace std;

int main(){
    Veiculo *veiculos[2];

    veiculos[0] = new Veiculo();
    veiculos[1] = new Carro();

    for(int i=0; i < 2; i++){
        veiculos[i]->exibe();
    }
}