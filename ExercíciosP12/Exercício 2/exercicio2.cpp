#include <iostream>
#include <ctime>
using namespace std;

void bom_dia();
int aleat();
int dobro(int);
void mostra_dobro(int);

int main(){
	int x, num;
    srand(time(NULL));
	bom_dia();
	printf("%d \n", aleat());
	x = aleat(); 	 
	num += dobro(x);
	if (dobro(x) > dobro(aleat())){
    		mostra_dobro(x);
	}
	return 0;
}

void bom_dia(){
    cout << "Tenha uma otimo dia!!" << endl;
}

int aleat(){
    return rand();
}

int dobro(int numero){
    return numero*2;
}

void mostra_dobro(int numero){
    cout << "Aqui esta o dobro: " << numero << endl;
}