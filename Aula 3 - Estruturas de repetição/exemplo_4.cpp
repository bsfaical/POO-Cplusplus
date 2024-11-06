#include <iostream>
using namespace std;
int main() {
    int cond_parada = 0;
    int cont = 0;
    while (cond_parada <= 4){
        cond_parada++;
        cont += 1;
    }
    cout << "Total de iterações: " << cont << endl;
}
