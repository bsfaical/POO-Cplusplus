#include <string>
using namespace std;

class Carro{
    private:
        string cor_predominante;
        int ano_fabricacao;

    public:
        // Construtores 
        Carro();
        Carro(string cor, int ano); 

        // Getters
        string get_cor(); 
        int get_ano();

        // Setters
        void set_paint_color(string cor); 
        void set_year(int ano);

        // Outros métodos
        void exibe_atributos();
        void atualiza_dados(string cor, int ano);

};