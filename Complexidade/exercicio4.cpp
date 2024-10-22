#include <iostream>
using namespace std;

void OrdenarVetor(int *v, int tam);
int Busca(int *v, int tam, int num);

int main(){
    int *vA, v, n;
    cout << "De o tamanho do vetor" << endl;
    cin >> n;
    if(!(vA = new(nothrow) int[n])){
        cout << "Falha na alocacao de memoria" << endl;
        return -1;
    }
    cout << "Preencha o vetor" << endl;
    for(int i=0;i<n;i++)
        cin >> *(vA+i);
    OrdenarVetor(vA,n);
    cout << "Entre um numero" << endl;
    cin >> v;
    if(Busca(vA,n,v) != -1)
        cout << "O numero " << v << " se localiza no indice " << Busca(vA,n,v) << endl;
    else
        cout << "O numero " << v << " nao existe no vetor" << endl;

    return 0;
}
int Busca(int *v, int tam, int num){
    int esquerda = 0, direita=tam;
    while(esquerda <= direita){
        int meio = esquerda + (direita-esquerda)/2;
        if(v[meio] == num)
            return meio;
        if(v[meio] < num)
            esquerda = meio + 1;
        if(v[meio] > num)
            direita = meio - 1;
    }
    return -1;
}

void OrdenarVetor(int *v, int tam){
    for(int i=0;i<tam-1;i++){
        for(int j=0;j<tam-i-1;j++){
            if(*(v+j) > *(v+i)){
                swap(*(v+j),*(v+i));
            }
        }
    }
}