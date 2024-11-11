#include <iostream>
using namespace std;

bool EstaOrdenado(int *a, int n);
void Embaralhar(int *a, int n);
void BogoSort(int *a, int n);
void Imprimir(int *a, int n);


int main(){
    int *a;
    int n;
    cout << "Tamanho do vetor" << endl;
    cin >> n;
    if(!(a = new(nothrow) int[n])){
        cout << "Droga!!!" << endl;
        return -1;
    }
    cout << "Entradas do vetor" << endl;
    for(int i=0;i<n;i++)
        cin >> *(a+i);
    BogoSort(a,n);
    delete[] a;
    a = NULL;
    return 0;
}

bool EstaOrdenado(int *a, int n){
    while(--n > 0)
        if(*(a+n) < *(a + (n-1)))
            return false;
    return true;
}

void Embaralhar(int *a, int n){
    for(int i=0; i < n; i++)
        swap(*(a+i),*(a + rand()%n));
}

void BogoSort(int *a, int n){
    int cont = 0;
    while(!EstaOrdenado(a, n)){
        Embaralhar(a, n);
        cout << "Contador: " << cont << endl;
        cont++;
        Imprimir(a, n);
    }
}

void Imprimir(int *a, int n){
    for(int i=0; i<n; i++)
        cout << *(a+i) << " ";
    cout << endl << endl;
}