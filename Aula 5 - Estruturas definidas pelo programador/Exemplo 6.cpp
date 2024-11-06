#include <iostream>
using namespace std;

struct notas{
    float nota[4];
};

struct aluno
{
    int matricula;
    char nome[100];
    notas notas_provas;
};

int main(){
    aluno bruno = {202043, "Bruno S Faiçal"};

    cout << bruno.matricula << ": " << bruno.nome << endl;
    bruno.notas_provas.nota[0] = 7.5;
    bruno.notas_provas.nota[1] = 8.5;
    bruno.notas_provas.nota[2] = 6.0;
    bruno.notas_provas.nota[3] = 7.4;

    for(int i=0; i<4; i++){
        cout << bruno.notas_provas.nota[i] << endl;
    }
    exit(0);
    //return(2);
}
