#include <iostream>
using namespace std;

int soma(int valor1, int valor2){
    int result;

    result = (valor1 + valor2);

    return result;
}

int main(){
    int item1=5;
    int item2=10;
    int resultado;

    resultado = soma(item1, item2);

    cout <<  "Soma: " << resultado << endl;
}
