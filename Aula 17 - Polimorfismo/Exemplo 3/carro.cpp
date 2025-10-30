#include <iostream>
#include "veiculo.cpp"
using namespace std;

class Carro: public Veiculo{
    public:
    void exibe(){
        cout << "Objeto de Carro" << endl;
    }

    void exibe2(){
        cout << "Metodo Exibe2 de Carro" << endl;
    }
};