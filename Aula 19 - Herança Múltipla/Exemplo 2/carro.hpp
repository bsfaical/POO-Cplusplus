#include <iostream>
#include "veiculo.hpp"
using namespace std;

class Carro: public virtual Veiculo{
    public:
    void exibe(){
        cout << "Objeto de Carro" << endl;
    }

    Carro(){}
};