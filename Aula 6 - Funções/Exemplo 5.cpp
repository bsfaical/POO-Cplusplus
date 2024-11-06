#include <iostream>
#include <string>
using namespace std;

void exibe(string frase="Bruno"){

    cout << "*" << frase << "*" << endl;

}

int main(){

    exibe();

    exibe("Bruno S. Faiçal");

}
