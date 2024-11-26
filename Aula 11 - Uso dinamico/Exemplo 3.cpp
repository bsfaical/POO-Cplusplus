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

        Retangulo(float base, float altura){
            this->base = base;
            this->altura = altura;
            n_objetos++;
        }

        static int get_quantidade_objetos();

        void set_base(float valor){
            if(valor > 0.0){
                this->base = valor;
            }else{
                cout << "[ERRO] Valor inadequado. Conteúdo de base não alterado." << endl;
            }
        }

        float get_base(){
            return this->base;
        }
};

int Retangulo::n_objetos = 0;
int Retangulo::get_quantidade_objetos(){
    return n_objetos;
}

int main(){
    Retangulo *ret = new Retangulo(1.0, 2.5);
    cout << "Objetos instânciados: " << Retangulo::get_quantidade_objetos() << endl;
    cout << ret->get_base() << endl;
    cout << ret << endl;
    delete ret;
    ret = nullptr;
    cout << ret << endl;
    cout << "Objetos instânciados: " << Retangulo::get_quantidade_objetos() << endl;
}