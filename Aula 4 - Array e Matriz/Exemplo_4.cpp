#include <iostream>
using namespace std;
int main() {
    int tamanho;
    cout << "insira o tamanho do array:";
    cin >> tamanho;
    int numeros[tamanho];
    for (int i = 0; i < tamanho; i++){
        cin >> numeros[i]; 
    }
}