#include <iostream>
using namespace std;
int main() {
    int opcao;
    cout << "Pressione 1 para falar com atendente" << endl; 
    cout << "Pressione 2 para registrar um recado" << endl; 
    cout << "Digite sua opção (1 ou 2): ";
    cin >> opcao;
    cout << endl << "Você escolheu a opção " << opcao << endl << endl;
    if (opcao >= 1 && opcao <= 2){
        if (opcao == 1)
            cout << "Direcionando para um atendente agora!" << endl << endl;
        else
            cout << "Registrando seu recado!" << endl << endl;
    } else {
        cout << "Opção não conhecida!" << endl << endl;
    }
    cout << "Atendimento finalizado!" << endl;
}
