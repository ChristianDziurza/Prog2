#include <iostream>
using namespace std;

#define N 100

typedef struct{
    int horas;
    int minutos;
}Horario;

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    Data NovaData;
    Horario NovoHorario;
    string descricao;
}Compromisso;

void Agenda(Compromisso *compromisso);
void Imprime(Compromisso *compromisso);

int main(){
    int n = 0;
    cout << "Quantos compromissos voce quer adicionar?: " << endl;
    cin >> n;
    if(n > 100){
        while(n > 100){
            cout << "O limite de compromissos possiveis eh 100" << endl;
            cin >> n;
        }
    }
    Compromisso calendario[N];
    for(int i=0;i<n;i++){
        cout << "Adicione um compromisso na agenda" << endl;
        Agenda(&calendario[i]);
    }
    cout << "Aqui estao seus compromissos" << endl;
    for(int i=0;i<n;i++){
        cout << "#" << i+1 << endl;
        Imprime(&calendario[i]);
        cout << endl << endl;
    }
    return 0;
}

void Agenda(Compromisso *compromisso){
    cout << "Quando ira ocorrer o compromisso? " << endl;
    cin >> compromisso->NovaData.dia >> compromisso->NovaData.mes >> compromisso->NovaData.ano;
    cout << "Qual o horario? " << endl;
    cin >> compromisso->NovoHorario.horas >> compromisso->NovoHorario.minutos;
    cout << "Adicione uma descricao para o compromisso: " << endl;
    cin.get();
    getline(cin, compromisso->descricao);
    cout << "Compromisso criado" << endl;
}

void Imprime(Compromisso *compromisso){
    cout << "Data" << endl;
    cout << compromisso->NovaData.dia << "/" << compromisso->NovaData.mes << "/" << compromisso->NovaData.ano;
    cout << "  " << compromisso->NovoHorario.horas << ":" << compromisso->NovoHorario.minutos << endl;
    cout << "Descricao do compromisso" << endl;
    cout << compromisso->descricao << endl;
}