#include <iostream>
using namespace std;

int Tribonacci(int num);

int main(){
    int n;
    cout << "Me de um numero" << endl;
    cin >> n;
    cout << "Esse eh o numero " << n << " da sequencia de Tribonacci: " << Tribonacci(n) << endl; 
    return 0;
}

int Tribonacci(int num){
    if(num == 0 || num == 1)
        return 0;
    if(num == 2)
        return 1;
    return Tribonacci(num-1) + Tribonacci(num-2) + Tribonacci(num-3);
    
}