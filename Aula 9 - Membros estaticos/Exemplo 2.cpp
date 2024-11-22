#include <iostream>
using namespace std;

class Retangulo{
    private:
        float base, altura;
        static int n_objetos;

    public:
        void increm_objetos(){
            n_objetos = n_objetos+1;
        }

        void init(float base, float altura){
            this->base=base;
            this->altura=altura;
            increm_objetos();
        }

        static int get_quant_objetos2();
};

int Retangulo::n_objetos = 0;

int Retangulo::get_quant_objetos2(){
    return n_objetos;
}

int main(){
    cout << "0- Número de objetos: " << Retangulo::get_quant_objetos2() << endl;
    Retangulo ret;
    cout << "1- Número de objetos: " << Retangulo::get_quant_objetos2() << endl;
    ret.init(2,1);
    cout << "2- Número de objetos: " << Retangulo::get_quant_objetos2() << endl;
    Retangulo ret2;
    ret2.init(4,3);
    cout << "3- Número de objetos: " << Retangulo::get_quant_objetos2() << endl;

}