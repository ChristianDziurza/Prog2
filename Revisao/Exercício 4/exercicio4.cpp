#include <iostream>
using namespace std;

void Insertion(int *v, int n);

int main(){
    return 0;
}

void Insertion(int *v, int n){
    int i, j, aux;

    for(int i=1;i<n;i++){
        j = i-1;
        aux = v[i];
        while(j>=0 && aux < v[j]){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = aux;
    }
}