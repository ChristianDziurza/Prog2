#include <iostream>
using namespace std;

int global = 10;

int Contas(int valor);

int main(){
    int v;

    cout << Contas(v) << endl;

    return 0;
}

int Contas(int valor){
    cout << "Me de um valor: " << endl;
    cin >> valor;
    valor > global? valor/=2 : valor *= global;
    return valor;
}