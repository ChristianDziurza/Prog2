#include <iostream>
#include <cmath>
using namespace std;

struct NumeroComplexo{
    float a;
    float b;
};

void SomaComplexa(NumeroComplexo num1, NumeroComplexo num2);
void SubtracaoComplexa(NumeroComplexo num1, NumeroComplexo num2);
void ProdutoComplexo(NumeroComplexo num1, NumeroComplexo num2);

int main(){
    NumeroComplexo z, w;
    cout << "Entre o valor de z" << endl;
    cin >> z.a >> z.b;
    cout << "Entre o valor de w" << endl;
    cin >> w.a >> w.b; 
    cout << "Z: " << z.a << " + " << z.b << "i" << endl;
    cout << "W: " << w.a << " + " << w.b << "i" << endl;
    SomaComplexa(z,w);
    SubtracaoComplexa(z,w);
    ProdutoComplexo(z,w);
    return 0;
}

void SomaComplexa(NumeroComplexo num1, NumeroComplexo num2){
    cout << "Soma de Z e W: " << num1.a + num2.a << " + " << num1.b + num2.b << "i" << endl;
}
void SubtracaoComplexa(NumeroComplexo num1, NumeroComplexo num2){
    cout << "Soma de Z e W: " << num1.a - num2.a << " - " << num1.b - num2.b << "i" << endl;
}
void ProdutoComplexo(NumeroComplexo num1, NumeroComplexo num2){
    float Dist1 = num1.a * num2.a + (num1.b*num2.b)*(-1);
    float Dist2 = num1.a * num2.b + num1.b*num2.a;

    cout << "Multiplicacao de Z e W: " << Dist1 << ((Dist2>0)? " + " : " - ", Dist2*(-1)) << Dist2 << "i" << endl;
}