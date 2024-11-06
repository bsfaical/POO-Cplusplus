#include <iostream>
using namespace std;
int main() {
    int opcao;
    cout << "Pressione 1 para falar com atendente" << endl; 
    cout << "Pressione 2 para registrar um recado" << endl;
    cout << "Pressione 3 para fazer uma doação" << endl;
    cout << "Digite sua opção (1, 2 ou 3): ";
    cin >> opcao;
    cout << endl << "Você escolheu a opção " << opcao << endl << endl;
    if (opcao == 1){
        cout << "Direcionando para um atendente agora!" << endl << endl;
    }else if (opcao == 2){
        cout << "Registrando seu recado!" << endl << endl;
    }else if (opcao == 3){
        cout << "Obrigado pela doação!" << endl << endl;
    }else{
        cout << "Opção não conhecida!" << endl << endl;
    }
    cout << "Atendimento finalizado!" << endl;
}
