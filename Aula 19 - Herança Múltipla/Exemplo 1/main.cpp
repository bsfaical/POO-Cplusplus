#include <iostream>
#include "hibrido.hpp"

using namespace std;

int main(){
    Carro *v1 = new Hibrido();
    Barco *v2 = new Hibrido();
    Hibrido *v3 = new Hibrido();

    v1->exibe();
    v2->exibe();
    v3->exibe();
}