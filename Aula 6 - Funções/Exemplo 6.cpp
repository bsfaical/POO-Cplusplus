#include <iostream>
using namespace std;

inline void imprime_oi();
void imprime_tchau(void);

int main(){
    imprime_oi();
    imprime_tchau();
}

inline void imprime_oi(){
    cout << "oi" << endl;
}

void imprime_tchau(void){
    cout << "tchau" << endl;
}