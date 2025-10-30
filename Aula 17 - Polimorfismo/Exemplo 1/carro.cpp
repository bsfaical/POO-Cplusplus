#include <iostream>
#include "veiculo.cpp"
using namespace std;

class Carro: public Veiculo{
    public:
    void exibe(){
        cout << "Objeto de Carro" << endl;
    }
};