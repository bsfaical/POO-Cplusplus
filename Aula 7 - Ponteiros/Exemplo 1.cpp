#include <iostream>
using namespace std;

int main(){
    int* pvalor;
    cout << "Conteúdo da memória reservada para pvalor: "<< pvalor << endl;
    pvalor=nullptr;
    cout << "Conteúdo da memória reservada para pvalor: "<< pvalor << endl;
}

