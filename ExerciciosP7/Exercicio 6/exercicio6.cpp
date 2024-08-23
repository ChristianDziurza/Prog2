#include <iostream>
using namespace std;

bool MaiorQZero(int num){
    return (num>0? true : false);
}

int Pow(int b, int exp){
    int resultado = 1;
    for(exp; exp > 0; exp--){
        resultado *= b;
    }
    return resultado;
}

int main(){
    int base = 0, expoente = 0;
    cin >> base >> expoente;
    if(MaiorQZero(base) && MaiorQZero(expoente)){
        cout << "Aqui a exponenciacao do numero: " << Pow(base, expoente) << endl;
    }else {
        cout << "Entrada invalida" << endl;
    }

}