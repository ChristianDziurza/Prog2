#include <iostream>
using namespace std;

#define N 3

typedef struct {
    float x;
    float y;
    float z;
    float Soma;
}Vetor;

float SomaVetor(Vetor *vetor);

int main(){
    Vetor vetor[N], vetor2[N];
    float vetorDasSomas[N];
    for(int i=0;i<N;i++){
        cin >> vetor[i].x >> vetor[i].y >> vetor[i].z;
        vetor[i].Soma = SomaVetor(&vetor[i]);
    }
    for(int i=0;i<N;i++){
        cin >> vetor2[i].x >> vetor2[i].y >> vetor2[i].z;
        vetor2[i].Soma = SomaVetor(&vetor2[i]);
    }
    for(int i=0;i<N;i++)
        vetorDasSomas[i] = vetor[i].Soma + vetor2[i].Soma;
    for(int i=1;i<N;i++)
        vetorDasSomas[0] += vetorDasSomas[i];
    cout << "Soma dos vetores: " << vetorDasSomas[0] << endl;
    return 0;
}

float SomaVetor(Vetor *vetor){
    return ((vetor->x)+(vetor->y)+(vetor->z));
}