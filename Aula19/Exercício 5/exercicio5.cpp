#include <iostream>
using namespace std;

bool Comparacao(int *v1, int *v2);

int main(){
    int a=43, b;
    cin >> b;
    cout << a << " --- " << b << endl;
    int *p1=&a, *p2=&b;

    if(Comparacao(p1,p2))
        cout << "Os ponteiros sao iguais" << endl;
    else
        cout << "Os ponteiros nao sao iguais" << endl;
    return 0;
}

bool Comparacao(int *v1, int *v2){
    return (*v1 == *v2)? true : false;
}
