#include <string>
#include "veiculo.hpp"
using namespace std;

class Carro: public Veiculo{
// class Carro: protected Veiculo{
// class Carro: private Veiculo{
    private:
        string marca;
        string modelo;

        void limpa_marca(){
            this->marca = "";
        };

    public:
        // Construtores 
        Carro(){
            marca = "";
            modelo = "";
            Veiculo();
        };
        Carro(string fabricante, string modelo, string cor, int ano){
            marca = fabricante;
            this->modelo = modelo;
            Veiculo(cor, ano);
        };

        // Getters
        string get_modelo(){
            return this->modelo;
        }; 
        string get_marca(){
            return this->marca;
        };
    
    protected:
        // Setters
        void set_marca(string marca){
            this->marca = marca;
        }; 
        void set_modelo(string modelo){
            this->modelo = modelo;
        }; 
};