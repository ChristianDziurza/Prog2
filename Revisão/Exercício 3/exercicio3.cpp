#include <iostream>
using namespace std;

int main(){
    int *v, n;
    cout << "Tamanho do vetor: " << endl;
    cin >> n;
    if(!(v = new(nothrow) int[n])){
        cout << "Falha na alocacao de memoria" << endl;
        return -1;
    }
    int i=0, soma=0;
    cout << "Vetor: " << endl;
    while(i < n){
        *(v+i) = i*2;
        soma += *(v+i);
        cout << *(v+i) << endl;
        i++;
    }
    cout << "Soma de todos os elementos do vetor: " << soma << endl;
    return 0;
}