#include <iostream>
using namespace std;

float AreaCirculo(float raio);

int main(){
    float r = 0;
    cin >> r;
    cout << "Aqui esta a area do circulo: " << AreaCirculo(r) << endl; 

    return 0;
}

float AreaCirculo(float raio){
    return (3.14 * (raio*raio));
}