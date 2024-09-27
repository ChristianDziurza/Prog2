#include <iostream>
#include <climits>
using namespace std;
#define N 5

void MinMaxVetor(int *v, int *min, int *max);

int main(){
    int vetor[N];
    for(int i=0;i<N;i++)
        cin >> vetor[i];
    int num1 = INT_MAX, num2 = INT_MIN;

    MinMaxVetor(vetor,&num1,&num2);

}

void MinMaxVetor(int *v, int *min, int *max){
    for(int i = 0; i < N; i++){
        if(*(v+i) < *min)
            *min = *(v+i);
        
        if(*(v+i) > *max)
            *max = *(v+i);
    }
    for(int i = 0; i < N; i++){
        cout << "Vetor[" << i << "]: " << *(v+i) << endl; 
    }
    cout << "Minimo: " << *min << endl;
    cout << "Maximo: " << *max << endl;
}