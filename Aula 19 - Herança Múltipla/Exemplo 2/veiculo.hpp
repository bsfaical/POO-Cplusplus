#ifndef VEICULO
#define VEICULO

#include <iostream>
using namespace std;

class Veiculo{
    public:
    virtual void exibe(){
        cout << "Objeto de Veiculo" << endl;
    }

    Veiculo(){}

};

#endif