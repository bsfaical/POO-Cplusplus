#include <iostream>
using namespace std;
int main() {
    char resp;
    int cont = 0;
    do{
        cont += 1;
        cout << "Fazer nova iteração: ";
        cin >> resp;
    }while (resp == 's' || resp == 'S');
    cout << "Total de iterações: " << cont << endl;
}
