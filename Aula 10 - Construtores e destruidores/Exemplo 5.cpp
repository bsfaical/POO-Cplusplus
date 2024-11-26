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
        ~Retangulo(){
            base = 0.0;
            altura = 0.0;
            n_objetos--;
        }

        static int get_quantidade_objetos();
};

int Retangulo::n_objetos = 0;
int Retangulo::get_quantidade_objetos(){
    return n_objetos;
}

int main(){
    Retangulo ret = Retangulo();
    cout << "Objetos instânciados: " << Retangulo::get_quantidade_objetos() << endl;

    ret.~Retangulo();
    cout << "Objetos instânciados: " << Retangulo::get_quantidade_objetos() << endl;

}