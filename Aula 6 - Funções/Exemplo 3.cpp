#include <iostream>
using namespace std;

void soma(int valor1, int valor2);

int main(){
    int item1=5;
    int item2=10;

    soma(item1, item2);

}

void soma(int valor1, int valor2){
    int result;

    result = (valor1 + valor2);

    cout <<  "Soma: " << result << endl;

    //return; // Se a instrução return for inserida, ela não deve indicar nenhuma variável ou valor literal.
}
