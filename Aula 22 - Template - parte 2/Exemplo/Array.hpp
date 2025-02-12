#include <iostream>

using namespace std;

template <class T> class Array {
    private:
        T* ptr;
        int size;
    
    public:
        Array(T arr[], int size_){
            ptr = new T[size_];
            size = size_;
            for (int i = 0; i < size; i++)
                ptr[i] = arr[i];
        }

        void print();
};

template <class T> void Array<T>::print()
{
    for (int i = 0; i < size; i++)
        cout << *(ptr + i) << " " ;
    cout << endl;
}