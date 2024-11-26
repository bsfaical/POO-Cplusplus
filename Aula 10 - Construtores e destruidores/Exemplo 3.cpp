#include <iostream>
using namespace std;

class Retangulo{
    private:
        float base, altura;
        static int n_objetos;

    public:
        Retangulo(){
            base = 0.0;
            altura = 0.0;
            n_objetos++;
        }

        Retangulo(float base, float altura){
            this->base = base;
            this->altura = altura;
            n_objetos++;
        }

        static int get_quantidade_objetos();
};

int Retangulo::n_objetos = 0;
int Retangulo::get_quantidade_objetos(){
    return n_objetos;
}

int main(){
    cout << "1- Objetos instânciados: " << Retangulo::get_quantidade_objetos() << endl;
    Retangulo ret = Retangulo();
    cout << "2- Objetos instânciados: " << Retangulo::get_quantidade_objetos() << endl;
    Retangulo ret2 = Retangulo(2.0, 3.0);
    cout << "3- Objetos instânciados: " << Retangulo::get_quantidade_objetos() << endl;

}