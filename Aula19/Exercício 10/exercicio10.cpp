#include <iostream>
using namespace std;

bool Comparacao(int *v1, int *v2);

int main(){
    int a, b;
    cin >> a >> b;
    cout << a << " --- " << b << endl;
    int *p1, *p2;
    if(a%2 != 1){
        p1 = &a;
        p2 = &b;
    }else {
        p1 = &b;
        p2 = &a;
    }
    if(Comparacao(p1,p2))
        cout << "A variavel A esta em um endereco maior" << endl;
    else
        cout << "A variavel B esta em um endereco maior" << endl;
    return 0;
}

bool Comparacao(int *v1, int *v2){
    return (v1 > v2)? true : false;
}
