#include <iostream>
using namespace std;

float VolumeEsfera(float R){
    return (4 * 3.14 * (R*R*R))/3;
}

int main(){
    float raio;
    cin >> raio;
    cout << "Aqui esta o volume da esfera: " << VolumeEsfera(raio) << endl;
    return 0;
}