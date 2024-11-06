#include <iostream> 
using namespace std;
int main() {
    char magic_array[11];
    cout << "Digite o nome" << endl;
    cin >> magic_array;
    for (int i = 0; i<11; i++){
        if (magic_array[i] == '\0'){
            cout << "Tamanho: " << i << endl;
            cout << "Posições ocupadas: " << i+1 << endl;
            break;
        }
    }
}