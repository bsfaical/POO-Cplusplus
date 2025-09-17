#include <iostream>
#include "Carro.cpp"

using namespace std;


int main(){
    Carro *car = new Carro("Verde", 1998);

    cout << car->get_cor() << endl;

    delete car;
}