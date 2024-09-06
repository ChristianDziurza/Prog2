#include <iostream>
using namespace std;

void InverteVetor(int *vetor, int pos);

int main()
{
    int n = 4;
    int v[n];
    for(int i = 0; i < n; i++){
        cout << "De as entradas do vetor: " << endl;
        cin >> v[i];
    }
    
    InverteVetor(v, n);

    return 0;
}

void InverteVetor(int *vetor, int pos){
    int aux, tamanho = pos - 1, tamanho2 = pos;
    for(pos = 0; pos <= tamanho; pos++){
        aux = vetor[pos];
        vetor[pos] = vetor[tamanho];
        vetor[tamanho] = aux;
        tamanho--;
    }
    for(pos = 0; pos < tamanho2; pos++){
        cout << "Aqui esta o vetor invertido: " << vetor[pos] << endl;
    }
}
