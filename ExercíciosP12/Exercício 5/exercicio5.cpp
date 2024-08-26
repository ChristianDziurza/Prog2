#include <iostream>
using namespace std;

double calcularAreaRetangulo(double comprimento, double altura);

int main(){
    double comp, alt;
    cin >> comp >> alt;
    cout << calcularAreaRetangulo(comp, alt) << endl;

    return 0;
}

double calcularAreaRetangulo(double comprimento, double altura){
    return comprimento*altura;
}