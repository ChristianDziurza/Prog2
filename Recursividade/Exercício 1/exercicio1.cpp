#include <iostream>
using namespace std;

int SomaRecursiva(int num);

int main(){
    int n;
    cout << "De um numero" << endl;
    cin >> n;
    cout << "Soma de 1 ate " << n << ": " << SomaRecursiva(n) << endl;
    return 0;
}

int SomaRecursiva(int num){
    if(num == 1)
        return 1;
    return num + SomaRecursiva(num-1);
}