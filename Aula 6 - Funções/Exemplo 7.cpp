#include <iostream>
using namespace std;

long int fatorial(int numero);

int main(){
    int valor = 0;
    cin >> valor;
    cout << fatorial(valor) << endl;
}

long int fatorial(int numero){
    if (numero == 1){
        return long(1);
    }else{
        return long(numero) * fatorial(numero-1);
    }
}