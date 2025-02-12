#include <iostream>
#include "Array.hpp"

using namespace std;

int main()
{
    int *arr = new int[5];
    arr[0] = 5;
    arr[1] = 4;
    arr[2] = 3;
    arr[3] = 2;
    arr[4] = 1;

    Array<int> array_generico(arr, 5);

    // Os valores sofram substituidos por 0 
    delete[] arr;

    array_generico.print();

// --------------------------

    float *arr2 = new float[5];
    arr2[0] = 5.4;
    arr2[1] = 4.3;
    arr2[2] = 3.2;
    arr2[3] = 2.1;
    arr2[4] = 1.1;

    Array<float> array_generico2(arr2, 5);
    
    delete[] arr2;

    array_generico2.print();
}
