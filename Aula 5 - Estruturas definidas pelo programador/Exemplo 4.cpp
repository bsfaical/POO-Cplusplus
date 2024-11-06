#include <iostream>
using namespace std;

struct aluno
{
    int matricula;
    char nome[100];
    float nota[4];
};

int main(){
    aluno bruno = {202043, "Bruno S Faiçal"};

    cout << bruno.matricula << ": " << bruno.nome << endl;
    bruno.nota[0] = 7.5;
    bruno.nota[1] = 8.5;
    bruno.nota[2] = 6.0;
    bruno.nota[3] = 7.4;

    for(int i=0; i<4; i++){
        cout << bruno.nota[i] << endl;
    }
}
