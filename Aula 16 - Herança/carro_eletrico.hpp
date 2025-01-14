#include <string>
#include "carro.hpp"
using namespace std;

class Carro_eletrico: protected Carro{
    private:
        string bateria_marca;

    public:
        // Construtores 
        Carro_eletrico(){
            Carro();
        };
        Carro_eletrico(string fabricante, string modelo, string cor, int ano, string marca_bat){
            bateria_marca = marca_bat;
            Carro(fabricante, modelo, cor, ano);
        };

        // Getters
        string get_marca_bateria(){
            return this->bateria_marca;
        };
    
    protected:
        // Setters
        void set_marca_bateria(string marca){
            this->bateria_marca = marca;
        }; 
        void set_modelo(string model){
            // Carro::modelo = model; //Atributo privado
            Carro::set_modelo(model);
        }; 
        void set_marca_cor(string marca, string cor){
            set_marca(marca);
            set_cor(cor);
        };

};