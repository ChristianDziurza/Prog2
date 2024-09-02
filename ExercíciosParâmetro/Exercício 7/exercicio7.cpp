#include <iostream>
using namespace std;

#define N 10


void InverteVetor(int *vetor[N]);

int main(){
    int v[N];
    int *p;
    p = &v[N];
    for(int i = 0; i < N; i++){
        cin >> v[i];
        cout << "Vetor: " << v[i] << endl;
    }
    InverteVetor(&p);


    return 0;
}

void InverteVetor(int *vetor[N]){
    int c[N];
    for(int i = N; i >= 0; i--){
        c[i] = *vetor[i];
    }
    for(int i = 0; i < N; i++){
        cout << "Vetor invertido: " << c[i];
    }
}