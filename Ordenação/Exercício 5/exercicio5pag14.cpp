#include <iostream>
using namespace std;

void SelectionSort(int *v, int n);

int main(){
    int *v, n;
    cout << "Tamanho do vetor" << endl;
    cin >> n;
    if(!(v = new(nothrow) int[n])){
        cout << "Droga deu erro" << endl;
        return -1;
    }
    for(int i=0;i<n;i++){
        cout << "Vetor[" << i << "]: ";
        cin >> *(v+i);
        cout << endl;
    }
    SelectionSort(v, n);
    cout << "Vetor ordenado" << endl;
    for(int i=0; i<n; i++)
        cout << *(v+i) << endl;
    delete[] v;
    v = NULL;
    return 0;
}

void SelectionSort(int *v, int n){
    int i, j, maior;
    for (i = 0; i < n-1; i++){
    maior = i;
    for (j = i+1; j < n; j++){
        if (v[j] > v[maior])
            maior = j;
        }
    if (v[maior] != v[i])
        swap(*(v+maior), *(v+i));
    }
}
