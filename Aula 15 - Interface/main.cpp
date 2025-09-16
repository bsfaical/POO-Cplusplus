#include <iostream>
#include "Carro.cpp"

using namespace std;


int main(){
    Carro *car = new Carro();

    cout << car->get_cor() << endl;

    delete car;
}