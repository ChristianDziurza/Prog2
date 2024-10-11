#include <iostream>
using namespace std;

void PreencheVetor(int *p, int tam);
void Imprimir(int *p, int tam);

int main(){
    int n, *p;
    cout << "Tamanho do vetor" << endl;
    cin >> n;
    if(!(p = new(nothrow) int[n])){
        cout << "Falha na alocacao de memoria" << endl;
        return -1; 
    }
    PreencheVetor(p,n);
    Imprimir(p,n);
    delete[] p;
    p = NULL;
    return 0;
}

void PreencheVetor(int *p, int tam){
    int i=0;
    while(i < tam){
        *(p+i) = i;
        i++;
    }
}
void Imprimir(int *p, int tam){
    int i=0;
    while(i < tam){
        cout << "Vetor no indice " << i << ": " << *(p+i) << endl;
        i++;
    }
}