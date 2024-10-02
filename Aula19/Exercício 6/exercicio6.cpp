#include <iostream>
using namespace std;

int Estatica();

int main(){
    cout << Estatica() << endl;
    cout << Estatica() << endl;
    cout << Estatica() << endl;
    cout << Estatica() << endl;
    cout << Estatica() << endl;
    return 0;
}

int Estatica(){
    static int a = 10;
    a++;
    return a;
}