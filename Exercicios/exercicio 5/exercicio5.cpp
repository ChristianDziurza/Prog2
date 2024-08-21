#include <iostream>
using namespace std;

bool Natural(int valor){
    return (valor > 0? true : false);
}
int Fatorial(int num){
    int resultado = 1;
    for(num; num > 0; num--){
        resultado*= num;
    }
    return resultado;
}

int main(){
    int numero = 0;
    cin >> numero;
    if(Natural(numero)){
        cout << "Aqui esta o fatorial do numero: " << Fatorial(numero) << endl;
    }else {
        cout << "O numero nao eh natural" << endl;
    }

    return 0;
}