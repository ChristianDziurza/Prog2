#include <iostream>
using namespace std;

int IncrementaRegistro();

int main(){
    cout << IncrementaRegistro() << endl;
    cout << IncrementaRegistro() << endl;
    cout << IncrementaRegistro() << endl;
    cout << IncrementaRegistro() << endl;
    return 0;
}

int IncrementaRegistro(){
    register int x;
    x = 10;
    x++;
    return x;
}