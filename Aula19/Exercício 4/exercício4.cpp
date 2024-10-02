#include <iostream>
using namespace std;

int SubtraiPonteiros(int *v1, int *v2);

int main(){
    int a,b;
    cin >> a >> b;
    int *p1=&a, *p2=&b;
    cout << *p1 << "  " << *p2 << endl;
    cout << "Subtracao de p1 e p2:" << endl;
    cout << SubtraiPonteiros(p1,p2) << endl;
    return 0;
}

int SubtraiPonteiros(int *v1, int *v2){
    return v1-v2;
}