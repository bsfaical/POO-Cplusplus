#include <iostream>
#include <string>
using namespace std;

struct aluno
{
    int matricula;
    string nome;
};

int main(){
    aluno bruno = {202043};
    cout << "Insira o seu nome: ";
    getline(cin, bruno.nome);
    cout << bruno.matricula << ": " << bruno.nome << endl;
}
