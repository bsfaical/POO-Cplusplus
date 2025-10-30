#include <iostream>
#include "carro.cpp"

using namespace std;

int main(){
    Veiculo *v1 = new Veiculo();
    Veiculo *v2 = new Carro();

    v1->exibe();
    v2->exibe();
    // v2->exibe2(); // ERRO: classe "Veiculo" não possui membro "exibe2"
}