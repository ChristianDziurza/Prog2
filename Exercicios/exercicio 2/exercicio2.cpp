#include<iostream>
using namespace std;

bool Par(int valor){
    return (valor%2 == 0? true : false);
}

int main(){
    int v;
    cin >> v;
    
    if(Par(v)){
        cout << "O numero eh par" << endl;
    }else {
        cout << "O numero eh impar" << endl;
    }
}