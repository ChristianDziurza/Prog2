#include <iostream>
using namespace std;

int ContarRecursivo(int );

int main(){
    int n;
    cout << "Entre um numero" << endl;
    cin >> n;
    cout << "Esse numero possui " << ContarRecursivo(n) << " digitos" << endl;
    return 0;
}

int ContarRecursivo(int num){
    if(num < 1)
        return 0;
    return 1 + ContarRecursivo(num/10);
}