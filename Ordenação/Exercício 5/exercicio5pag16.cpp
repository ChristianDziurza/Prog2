#include <iostream>
using namespace std;

void BubbleSort(int *v, int n);

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
    BubbleSort(v, n);
    cout << "Vetor ordenado" << endl;
    for(int i=0; i<n; i++)
        cout << *(v+i) << endl;
    delete[] v;
    v = NULL;
    return 0;
}

void BubbleSort(int *v, int n){
    int i;
    if(n == 1)
        return;

    for(i = 0; i < n-1; i++)
        if(v[i] > v[i+1])
            swap(*(v+i), *(v + (i+1)));
    BubbleSort(v, n-1);

}