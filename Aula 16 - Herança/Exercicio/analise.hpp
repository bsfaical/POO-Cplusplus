#include <string>
#include"readCSV.hpp"

using namespace std;

class Analise{
    protected:
        vector<SaleRecord> vendas;

    public:
        Analise(vector<SaleRecord> vetor_vendas){
            vendas = vetor_vendas;
        };

        
        double valor_total_vendas(){
            double total=0;
            for (const SaleRecord& venda : this->vendas) {
                total += venda.price;
            }
            return total;
        }

        void print_dataset(){
            for (const SaleRecord& venda : this->vendas) {
                cout << venda.date << setw(5) << venda.quantity << setw(10)  << venda.product  << setw(10) 
                    << "R$ " << fixed << setprecision(2) << venda.price << endl;
            }
        }




};