#include <iostream>
using namespace std;

int main(){
    float numero1, numero2;
    float *fp;
    fp = &numero1;

    cout << "Valor do objeto apontado por fp: " << *fp << endl;
    numero2 = *fp;
    cout << "Valor de numero2: " << numero2 << endl;
    cout << "Endereco de numero1: " << &numero1 << endl;
    cout << "Enderço armazenado em fp: " << fp << endl;
    //7: é o mesmo endereço 


    return 0;
}