#include <iostream>
using namespace std;

bool Bissexto(int ano);

int main(){
    int year = 0;
    cout << "Me diga um ano: " << endl;
    cin >> year;
    if(Bissexto(year)){
        cout << "O ano " << year << " eh bissexto!!" << endl;
    } else{
        cout << "O ano " << year << " nao eh bissexto!!" << endl;
    }

    return 0;
}

bool Bissexto(int ano){
    bool bissexto = false;
    if(ano % 4 == 0 && ano % 100 != 0){
        bissexto = true;
    }else if(ano % 400 == 0){
        bissexto = true;
    }
    return bissexto;
}