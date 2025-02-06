#include <iostream>
#include <vector>

using namespace std;


template <class T> T Max(T X, T Y) { 
    return X > Y ? X : Y; 
}


int main(){
    vector<int> vetor1 = {2, 4}, 
                vetor2 = {3, 8}, 
                resp1;
    
    vector<int> vetor3 = {5, 2}, 
                vetor4 = {1, 7}, 
                resp2;

    resp1 = Max(vetor1, vetor2);

    resp2 = Max(vetor3, vetor4);

    vector<int>::iterator pos;
    for(pos = resp1.begin(); pos != resp1.end(); ++pos){
        cout << *pos << " ";
    }

    cout << endl;

    for(pos = resp2.begin(); pos != resp2.end(); ++pos){
        cout << *pos << " ";
    }
    
}