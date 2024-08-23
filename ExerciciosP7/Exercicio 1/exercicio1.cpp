#include <iostream>
using namespace std;

bool MultiQuatro(int valor){
    return (valor%4==0? true : false);
}

int main(){
    int x;
    cin >> x;

    if(MultiQuatro(x)){
        cout << "Esse numero e um multiplo de 4" << endl;
    }else {
        cout << "Esse numero nao e divisivel por 4" << endl;
    }
}