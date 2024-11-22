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

        int get_quant_objetos(){
            return n_objetos;
        }
};

int Retangulo::n_objetos = 0;

int main(){
    Retangulo ret;
    cout << "1- Número de objetos: " << ret.get_quant_objetos() << endl;
    ret.init(2,1);
    cout << "2- Número de objetos: " << ret.get_quant_objetos() << endl;
    Retangulo ret2;
    cout << "3- Número de objetos: " << ret.get_quant_objetos() << endl;
    ret2.init(5,8);
    cout << "4- Número de objetos: " << ret.get_quant_objetos() << endl;
    cout << "4.1- Número de objetos: " << ret2.get_quant_objetos() << endl;

}