#include <iostream>
using namespace std;

int Soma(int *v, int n);

int main(){
    int tam;
    cout << "Tamanho do vetor" << endl;
    cin >> tam;
    int *v;
    if(!(v = new(nothrow) int[tam])){
        cout << "Ja era" << endl;
        return -1;
    }
    cout << "Entradas do vetor" << endl;
    for(int i=0;i<tam;i++)
        cin >> v[i];
    cout << "Soma das entradas: " << Soma(v,tam) << endl;
    return 0;
}

int Soma(int *v, int n){
    int soma = 0;
    for(int i = n-1;i >= 0; i--){
        soma+=v[i];
    }
    return soma;
}