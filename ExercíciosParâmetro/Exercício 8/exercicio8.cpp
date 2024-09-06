#include <iostream>
using namespace std;

void StringMaiuscula(string &palavra);

int main(){
    string nome;
    cout << "Me de uma palavra: " << endl;
    cin >> nome;
    StringMaiuscula(nome);
    return 0;
}

void StringMaiuscula(string &palavra){
    int i = 0;
    while(palavra[i] != '\0'){
        if(palavra[i] >= 97 && palavra[i] <= 122){
            palavra[i]=palavra[i]-32;
        }
        i++;
    }
    cout << "Aqui esta o nome em maiusculo: " << palavra << endl;
}