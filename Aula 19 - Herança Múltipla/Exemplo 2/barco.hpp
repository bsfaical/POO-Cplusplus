#include <iostream>
#include "veiculo.hpp"
using namespace std;

class Barco: public virtual Veiculo{
    public:
    void exibe(){
        cout << "Objeto de barco" << endl;
    }

    Barco(){}
};