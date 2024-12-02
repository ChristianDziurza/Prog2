#include <iostream>
using namespace std;

int BuscaBi(int *v, int x, int ini, int fim);
void Insertion(int *v, int n);

int main(){
    int n, x;
    cout << "Tamanho do vetor" << endl;
    cin >> n;
    int *v;
    if(!(v = new(nothrow) int[n])){
        cout << "Ja era" << endl;
        return -1;
    }
    cout << "Preenchimento do vetor" << endl;
    for(int i=0;i<n;i++)
        cin >> v[i];
    Insertion(v,n);
    cout << "Numero para busca" << endl;
    cin >> x;
    if(BuscaBi(v,x,0,n) == -1)
        cout << "Numero nao existe no escopo do vetor" << endl;
    else
        cout << "Numero encontrado na posicao: " << BuscaBi(v,x,0,n) << endl; 
    return 0;
}

int BuscaBi(int *v, int x, int ini, int fim){
    if(ini > fim)
        return -1;
    else{
        int meio = (ini+fim)/2;
        if(v[meio] == x)
            return meio;
        else
            if(x < v[meio])
                BuscaBi(v,x,ini,meio-1);
            else
                BuscaBi(v,x,meio+1,fim);
    }
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