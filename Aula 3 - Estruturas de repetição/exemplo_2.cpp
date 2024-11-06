#include <iostream>
using namespace std;
int main() {
    int quantidade = 0;
    cout << "Quantas iterações deseja realizar?" << endl;
    cin >> quantidade;
    for (int i = 0; i < quantidade; i++){
        cout << "Iteração: " << i << endl;
    }
}
