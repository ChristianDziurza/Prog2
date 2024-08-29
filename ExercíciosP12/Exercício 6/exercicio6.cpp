#include <iostream>
using namespace std;

int gerarNumeroAleatorio();

int main(){
    srand(time(NULL));
    cout << "Aqui esta seu numero aleatorio: " << gerarNumeroAleatorio() << endl;

    return 0;
}

int gerarNumeroAleatorio(){
    return rand()%100;
}