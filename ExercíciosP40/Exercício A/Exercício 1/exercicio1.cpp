#include <iostream>
using namespace std;

void Ordenacao(int *a, int *b);

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    Ordenacao(&num1, &num2);
    cout << "A: " << num1 << endl << "B: " << num2 << endl;

    return 0;
}

void Ordenacao(int *a, int *b){
    int aux = 0;
    if(*a > *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}