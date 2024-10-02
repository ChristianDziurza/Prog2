#include <iostream>
using namespace std;

extern int x;

void Printar(){
    x = 90;
    cout << "Valor de x: " << x << endl;
}