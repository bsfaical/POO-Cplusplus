#include <iostream>

using namespace std;


template <class T, class B> B Max(T X, B Y) { 
    return X > Y ? X : Y; 
}


int main(){
    cout << Max(5, 2) << endl;
    cout << Max(3.5, 8.3) << endl;
    cout << Max(4.5, 9) << endl;
    cout << Max(8, 9.5) << endl;
    cout << Max("Bruno", "Fernando") << endl;
}