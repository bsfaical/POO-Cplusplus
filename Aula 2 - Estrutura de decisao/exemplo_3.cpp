#include <iostream>
using namespace std;
int main() {
    int opcao;
    cout << "Pressione 1 quando estiver pronto para" << endl; 
    cout << "falar com um atendente: "; 
    cin >> opcao;
    cout << endl << "Você escolheu a opção " << opcao << endl << endl;
    if (opcao == 1){
        cout << "Direcionando para um atendente agora!" << endl << endl;
    } else {
        cout << "Opção não conhecida!" << endl << endl;
    }
    cout << "Atendimento finalizado!" << endl;
}
