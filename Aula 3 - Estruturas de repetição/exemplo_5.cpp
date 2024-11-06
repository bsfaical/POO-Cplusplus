#include <iostream>
using namespace std;
int main() {
    char resp;
    int cont = 0;
    cout << "Fazer iteração: ";
    cin >> resp;
    while (resp == 's' || resp == 'S'){
        cont += 1;
        cout << "Fazer nova iteração: ";
        cin >> resp;
    }
    cout << "Total de iterações: " << cont << endl;
}
