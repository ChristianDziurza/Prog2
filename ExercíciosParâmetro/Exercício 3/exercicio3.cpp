#include <iostream>
using namespace std;

int Soma10(int num);

int main(){
    int a;
    cin >> a;
    cout << "Numero +10: " << Soma10(a) << endl;

    return 0;
}

int Soma10(int num){
    return num+10;
}