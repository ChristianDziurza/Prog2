#include <iostream>
using namespace std;

int SomaDoIntervalo(int num1, int num2){
    int soma = 0;
    for(num1; num1 <= num2; num1++){
        soma+=num1;
    }
    return soma;
}

int main(){
    int limite1, limite2;
    cout << "Entre o numero inicial: " << endl;
    cin >> limite1;
    cout << "Entre o numero final: " << endl;
    cin >> limite2;
    cout << "Aqui esta a soma do intervalo entre eles: " << SomaDoIntervalo(limite1,limite2) << endl; 
}