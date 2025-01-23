#include <iostream>
#include "veiculo.hpp"
#include "carro.hpp"

using namespace std;

int main(){
    Veiculo *v2 = new Carro();

    v2->exibe();
}