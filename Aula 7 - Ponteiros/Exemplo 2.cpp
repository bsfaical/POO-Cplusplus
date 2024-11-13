#include <iostream>
using namespace std;

int main(){
    int valor;
    valor = 5;
    int *pvalor;
    cout << "Conteúdo da memória reservada para pvalor (lixo): "<< pvalor << endl;
    pvalor=nullptr;
    cout << "Conteúdo da memória reservada para pvalor (nulo): "<< pvalor << endl;
    cout << "Conteúdo da variável valor: "<< valor << endl;
    cout << "Endereço da variável valor: "<< &valor << endl;
    pvalor=&valor;
    cout << "Conteúdo da memória reservada para pvalor (end. valor): "<< pvalor << endl;
    cout << "Endereço pvalor): "<< &pvalor << endl;
}

