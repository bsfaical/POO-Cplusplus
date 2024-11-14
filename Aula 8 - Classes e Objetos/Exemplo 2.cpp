#include <iostream>
using namespace std;

class Retangulo{
    private:
    int base, altura;

    public:
    void init (int base, int altura){
        this->base=base;
        this->altura=altura;
    }

    int get_base(){
        return base;
    }
    int get_altura(){
        return altura;
    }
};

int main(){
    Retangulo ret;
    ret.init(2,1);

    cout << "Altura: " << ret.get_altura() << 
            " Base: " << ret.get_base() << endl;
    
}