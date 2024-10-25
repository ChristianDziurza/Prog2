#include <iostream>
using namespace std;

int SomaDosParesRecursivo(int num);

int main(){
    int n;
    cout << "Entre um numero" << endl;
    cin >> n;
    cout << "Aqui esta a soma dos pares entre 1 e " << n << ": " << SomaDosParesRecursivo(n) << endl;
    return 0;
}

int SomaDosParesRecursivo(int num){
    int soma = 0;
    if(num == 1)
        return 0;
    if(num%2 == 0)
        soma = num;
    return soma + SomaDosParesRecursivo(num-1);
}