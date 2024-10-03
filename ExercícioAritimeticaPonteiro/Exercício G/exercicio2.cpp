#include <iostream>
using namespace std;

void UnirVetor(int *v, int tam1, int *v2, int tam2);

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int vetor1[n1], vetor2[n2];
    for(int i=0;i<n1;i++)
        cin >> vetor1[i];
    for(int i=0;i<n2;i++)
        cin >> vetor2[i];
    
    UnirVetor(vetor1,n1,vetor2,n2);
    return 0;
}

void UnirVetor(int *v, int tam1, int *v2, int tam2){
    int VetorU[tam1+tam2];
    for(int i=0;i<tam1;i++){
        VetorU[i] = v[i];
    }
    for(int i=0;i<tam2;i++){
        VetorU[tam1+i] = v2[i];
    }
    cout << "Vetor final" << endl;
    for(int i=0;i<(tam1+tam2);i++){
        cout << VetorU[i] << endl;
    }
}   