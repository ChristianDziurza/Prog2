#include <iostream>
#include <stdlib.h>
#include <ctime>

#define N 5

using namespace std;

typedef struct{
    string Valor[13] = {"As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Valete", "Dama", "Rei"};
    char a=3, b=4, c=5, d=6;
    char Naipes[4] = {a,b,c,d};
    string maoVal[5];
    char maoNaipe[5];
}Cartas; 
void CriaMao(Cartas *cartas);

int main(){
    srand(time(NULL));
    Cartas jogador1[N], jogador2[N];
    cout << "Mao do primeiro jogador" << endl;
    CriaMao(jogador1);
    cout << "Mao do segundo jogador" << endl;
    CriaMao(jogador2);
    return 0;
}

void CriaMao(Cartas *cartas){
    int random1, random2;
    for(int i=0;i<N;i++){
        random1 = rand()%13;
        random2 = rand()%4;
        cartas->maoVal[i] = cartas->Valor[random1];
        cartas->maoNaipe[i] = cartas->Naipes[random2];
    }
    cout << "Cartas do Jogador" << endl;
    for(int i=0;i<N;i++){
        cout << cartas->maoNaipe[i] << cartas->maoVal[i] << cartas->maoNaipe[i] << endl;
    }
}

