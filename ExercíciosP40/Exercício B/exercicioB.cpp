#include <iostream>
using namespace std;

bool has_zero(int a[], int n);

int main(){
    int tamanho = 5;
    int v[tamanho] = {1,2,3,4,0};
    if(has_zero(v, tamanho))
        cout << "O vetor possui zero!" << endl;
    else
        cout << "O vetor nao possui zero!" << endl;
    return 0;
}

bool has_zero(int a[], int n) {
    int i;
    for (i = 0; i < n; i++){
        if (a[i] == 0)
            return true;
    } 
    return false;
}