#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

#define N 5

int maiorDoVetor(int *vetor, int tamanho);
int mediaVetor(int vetor[], int tam);
int positivosVetor(int vetor[N]);
void valoresVetor(int vetor[], int valores);
void maioMenor(int *vetor, int taman);



int main(){
    srand(time(NULL));
    int n = 5;
    int v[N];
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    cout << "Maior valor do vetor: " << maiorDoVetor(v, n) << endl;
    cout << fixed << setprecision(2) << "Media do vetor: " << mediaVetor(v, n) << endl;
    cout << "Positivos do vetor: " << positivosVetor(v) << endl;
    maioMenor(v,n);
    valoresVetor(v,n);

    return 0;
}

int maiorDoVetor(int *vetor, int tamanho){
    int aux = 0;
    for(int i = 0; i < tamanho;i++){
        if(aux < vetor[i])
            aux = vetor[i];
    }
    return aux;
}

int mediaVetor(int vetor[], int tam){
    float media;
    for(int i = 0; i < tam; i++){
        media += vetor[i];
    }
    media = media / tam;
    return media;
}

int positivosVetor(int vetor[N]){
    int aux = 0;
    for(int i = 0; i < N;i++){
        if(vetor[i] > 0)
            aux += 1;
    }
    return aux;
}

void valoresVetor(int vetor[], int valores){
    for(int i = 0; i < valores; i++){
        vetor[i] = rand()%100;
    }
    cout << "Aqui esta o outro vetor: " << endl;
    for(int i = 0; i < valores; i++){
        cout << vetor[i] << endl;
    }
}

void maioMenor(int *vetor, int taman){
    int aux = 0;
    for(int i = 0; i < taman; i++){
        if(aux < vetor[i])
            aux = vetor[i];
    }
    cout << "Maior numero do vetor: " << aux << endl;
    aux = 100000;
    for(int i = 0; i < taman; i++){
        if(aux > vetor[i])
            aux = vetor[i];
    }
    cout << "Menor numero do vetor: " << aux << endl;
}