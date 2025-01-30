#include <iostream>
#include "carro.hpp"
#include "barco.hpp"
using namespace std;

class Hibrido: public Carro, public Barco{
    public:
    void exibe(){
        cout << "Objeto de Hibrido" << endl;
    }
};