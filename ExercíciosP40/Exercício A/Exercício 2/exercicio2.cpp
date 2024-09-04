#include <iostream>
using namespace std;

void Decompor(double *num1);

int main(){
    double a;
    cin >> a;
    cout << "Numero: " << a << endl;
    Decompor(&a);
    return 0;
}

void Decompor(double *num1){
    int inteiro;
    float fracionario;
    inteiro = int(*num1);
    fracionario = *num1 - inteiro;
    cout << "Parte Inteira: " << inteiro << endl;
    cout << "Parte Fracionaria: " << fracionario << endl;
}