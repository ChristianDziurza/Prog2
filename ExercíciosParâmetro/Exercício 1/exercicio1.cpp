#include <iostream>

using namespace std;

int Multiplicacao(int num1, int num2);

int main(){
    int a, b;
    cout << "Me de dois numeros: " << endl;
    cin >> a >> b;
    cout << "Aqui esta a multlicacao deles: " << Multiplicacao(a, b) << endl;
    return  0;
}

int Multiplicacao(int num1, int num2){
    return num1*num2;
}