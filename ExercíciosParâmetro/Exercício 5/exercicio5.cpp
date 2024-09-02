#include <iostream>
using namespace std;

int Tira5(int num);

int main(){
    int a;
    cin >> a;
    cout << "Numero -5: " << Tira5(a) << endl;

    return 0;
}

int Tira5(int num){
    return num-5;
}