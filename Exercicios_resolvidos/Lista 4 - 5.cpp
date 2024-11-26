// 5. Faça um programa que receba os valores para preencher uma matriz 5x4 (5 linhas e 4
// colunas) e construa e exiba a matriz transposta da original.

#include <iostream> 
#include <iomanip> 
using namespace std;

void teste(float **matriz, int colunas, int linhas){
    for (int i=0; i<colunas; i++){ // percorre linhas
        for(int j=0; j<linhas; j++){ // perorrer colunas
            cout << setw(4) << matriz[i][j];
        }
        cout << endl;
    }
}

int main() {
    const int LINHAS = 5;
    const int COLUNAS = 4;
    float matriz[LINHAS][COLUNAS] = {{1.1, 1.2, 1.3, 1.4},
                                    {2.1, 2.2, 2.3, 2.4},
                                    {3.1, 3.2, 3.3, 3.4},
                                    {4.1, 4.2, 4.3, 4.4},
                                    {5.1, 5.2, 5.3, 5.4},
                                    };

    float **matriz_t = new float *[COLUNAS];
	
	
	for(int i=0; i<COLUNAS; i++){
		matriz_t[i] = new float[LINHAS];
	}
    // float matriz_t[COLUNAS][LINHAS];


    cout << "Matriz original:" << endl;
    for (int i = 0; i < LINHAS; i++) { // percorre as linhas
        for (int j = 0; j < COLUNAS; j++) { // percorre as colunas
            cout << setw(4) << matriz[i][j];
            matriz_t[j][i] = matriz[i][j];
        }
        cout << endl;
    }
    cout << endl << endl;
    cout << "Matriz transposta:" << endl;
    // for (int i=0; i<COLUNAS; i++){ // percorre linhas
    //     for(int j=0; j<LINHAS; j++){ // perorrer colunas
    //         cout << setw(4) << matriz_t[i][j];
    //     }
    //     cout << endl;
    // }
    // cout << endl << endl;
    teste(matriz_t, COLUNAS, LINHAS);
}