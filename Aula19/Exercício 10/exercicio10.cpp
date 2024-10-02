#include <iostream>
using namespace std;

bool Comparacao(int *v1, int *v2);

int main(){
    int a, b;
    cin >> a >> b;
    cout << a << " --- " << b << endl;
    int *p1=&a, *p2=&b;

    if(Comparacao(p1,p2))
        cout << *p1 << " eh maior que " << *p2 << endl;
    else
        cout << *p2 << " eh maior que " << *p1 << endl;
    return 0;
}

bool Comparacao(int *v1, int *v2){
    return (*v1 > *v2)? true : false;
}
