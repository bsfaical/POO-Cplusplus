#include <iostream>
#include <string>
using namespace std;

void exibe_destaque(string frase);

int main(){
    string frase = "Orientacao a Objeto";

    exibe_destaque(frase);

}

void exibe_destaque(string frase){
    int tamanho = frase.length();

    for(int i=0; i<tamanho+4; i++){
        cout << "*";
    }
    cout << endl;
    cout <<  "* " << frase << " *" << endl;
    for(int i=0; i<tamanho+4; i++){
        cout << "*";
    }
    cout << endl;

    return; // Se a instrução return for inserida, ela não deve indicar nenhuma variável ou valor literal.
}

/*
Este código tem um problema em sua execução.
Se a variável frase conter caracteres com
acentuação, a exibição fica com erro na
quantidade de asterisco.

Sugestão: corrija essa condição de execução,
remova este bloco de comentário e submeta
um Pull Request (PR) para corrigir o código
no repositório do GitHub.
*/