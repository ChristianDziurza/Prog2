#include <iostream>
using namespace std;

int Mult(int *num1, int *num2);

int main(){
    int a, b;
    cout << "Dois numeros: " << endl;
    cin >> a >> b;
    cout << "Aqui esta a multiplicacao entre eles: " << Mult(&a, &b);
    return 0;
}

int Mult(int *num1, int *num2){
    return (*num1)*(*num2);
}