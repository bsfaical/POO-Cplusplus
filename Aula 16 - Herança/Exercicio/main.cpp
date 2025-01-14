#include <iostream>
#include "analise.hpp"

using namespace std;

int main() {
    vector<SaleRecord> dataset_vendas = readSalesCSV("sales.csv");
    Analise* vendas = new Analise(dataset_vendas);

    vendas->print_dataset();

    cout << "Total do valor nos registros é:"  << setw(10) << "R$" << fixed << setprecision(2) 
        << vendas->valor_total_vendas() << endl << endl;
    
}