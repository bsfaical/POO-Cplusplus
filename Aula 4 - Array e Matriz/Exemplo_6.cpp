#include <iostream> 
#include <iomanip> 
using namespace std;
int main() {
    int i = 0; int j = 0;
    int magic_array[3][5] = {{6, 7, 8, 9, 10}, 
                            {13, 3, 1, 11, 12},
                            {5, 14, 15, 4, 2}};
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            cout << setw(4) << magic_array[i][j];
        }
        cout << endl;
    }
}