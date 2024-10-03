#include <iostream>
#define N 5
using namespace std;

void SeparaVetor(int *v);

int main(){
    int vetor[N];
    for(int i=0;i<N;i++)
        cin >> vetor[i];
    SeparaVetor(vetor);
    return 0;
}

void SeparaVetor(int *v){
    int j=0, k=0;
    int vetorPar[N], vetorImpar[N];
    for(int i=0;i<N;i++){
        if(v[i]%2 != 1){
            vetorPar[j] = v[i];
            cout << "Vetor par no indice " << j << ": " << vetorPar[j] << endl;
            j++;
        }else{
            vetorImpar[k] = v[i];
            cout << "Vetor impar no indice " << k << ": " << vetorImpar[k] << endl;
            k++;
        }
    }
}