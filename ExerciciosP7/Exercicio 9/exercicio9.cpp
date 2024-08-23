#include <iostream>
using namespace std;

float Conversao(float celsius);

int main(){
    float c;
    cout << "Entre um valor em Celsius: " << endl;
    cin >> c;
    cout << "Aqui esta ele em Fahreinheit: " << Conversao(c) << endl;
    return 0;
}

float Conversao(float celsius){ 
    return (celsius*9/5) + 32;
}