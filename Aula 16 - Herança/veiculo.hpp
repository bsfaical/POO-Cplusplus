#include <string>
using namespace std;

class Veiculo{
    private:
        string cor_predominante;
        int ano_fabricacao;

        void limpa_cor(){
            this->cor_predominante = "";
        };

    public:
        // Construtores 
        Veiculo(){
            cor_predominante = "";
            ano_fabricacao = 1908;
        };
        Veiculo(string cor, int ano){
            cor_predominante = cor;
            ano_fabricacao = ano;
        };

        // Getters
        string get_cor(){
            return cor_predominante;
        }; 
        int get_ano(){
            return ano_fabricacao;
        };

    protected:
        // Setters
        void set_cor(string cor){
            cor_predominante = cor;
        }; 
        void set_ano(int ano){
            ano_fabricacao = ano;
        };

};