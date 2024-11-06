/*
Este código realiza a mesma operação que o "Exemplo 1.cpp".

A diferença está na forma que o código foi escrito, com objetivo de ser curto.
*/

#include <iostream>
using namespace std;

int soma(int valor1, int valor2);

int main(){
    int item1=5, item2=10;

    cout <<  "Soma: " << soma(item1, item2) << endl;
}

int soma(int valor1, int valor2){
    return (valor1 + valor2);
}