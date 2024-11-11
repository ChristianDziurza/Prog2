#include <iostream>
using namespace std;

void GnomeSort(int *v, int n);
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
    GnomeSort(a,n);
    delete[] a;
    a = NULL;
    return 0;
}

void GnomeSort(int *v, int n){
    int gnomo = 0;
    while(gnomo < n){
        if(gnomo == 0)
            gnomo++;
        if(*(v+gnomo) >= *(v + (gnomo - 1)))
            gnomo++;
        else{
            swap(*(v+gnomo), *(v+(gnomo-1)));
            gnomo--;
        }
        Imprimir(v,n);
    }
    return;
}


void Imprimir(int *a, int n){
    for(int i=0; i<n; i++)
        cout << *(a+i) << " ";
    cout << endl << endl;
}