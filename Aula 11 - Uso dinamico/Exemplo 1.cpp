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
};

int Retangulo::n_objetos = 0;

int main(){
    Retangulo *ret = new Retangulo();
}