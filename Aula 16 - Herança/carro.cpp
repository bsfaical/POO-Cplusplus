#include <string>
#include "veiculo.cpp"
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
        Carro():Veiculo(){
            marca = "";
            modelo = "";
        };
        Carro(string fabricante, string modelo, string cor, int ano):Veiculo(cor, ano){
            marca = fabricante;
            this->modelo = modelo;
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