#include <iostream>
using namespace std;

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;
typedef struct{
    string logradouro;
    int numero;
    string bairro;
    string cidade;
    char estado[2];
}Endereco;
typedef struct{
    int ddd;
    int numero;
    string tipo;
}Telefone;
typedef struct{
    string nome;
    Data data_de_nascimento;
    Data data_de_matricula;
    Endereco endereco;
    Telefone contato[2];
}Aluno;

void CriaAluno(Aluno *aluno);
void Imprimir(Aluno *aluno);

int main(){
    Aluno aluno;
    CriaAluno(&aluno);
    Imprimir(&aluno);

    return 0;
}

void CriaAluno(Aluno *aluno){
    cout << "Qual seu nome?" << endl;
    getline(cin, aluno->nome);
    cout << "Quando voce nasceu?" << endl;
    cin >> aluno->data_de_nascimento.dia >> aluno->data_de_nascimento.mes >> aluno->data_de_nascimento.ano;
    cout << "Quando voce se matriculou?" << endl;
    cin >> aluno->data_de_matricula.dia >> aluno->data_de_matricula.mes >> aluno->data_de_matricula.ano;
    cout << "Qual seu logradouro?" << endl;
    cin.get();
    getline(cin, aluno->endereco.logradouro);
    cout << "Qual o numero da sua residencia" << endl;
    cin >> aluno->endereco.numero;
    cout << "Qual sua cidade e seu bairro?" << endl;
    cin.get();
    getline(cin, aluno->endereco.cidade);
    getline(cin, aluno->endereco.bairro);
    cout << "Qual seu Estado?" << endl;
    for(int i=0;i<2;i++)
        cin >> aluno->endereco.estado[i];
    cout << "De dois telefones para contato:" << endl;
    for(int i=0;i<2;i++){
        cout << "DDD" << endl;
        cin >> aluno->contato[i].ddd;
        cout << "Numero" << endl;
        cin >> aluno->contato[i].numero;
        cout << "Tipo" << endl;
        cin.get();
        getline(cin, aluno->contato[i].tipo);
    } 
}

void Imprimir(Aluno *aluno){
    cout << "Nome: " << aluno->nome << endl;
    cout << "Data de nascimento: " << aluno->data_de_nascimento.dia << "/" << aluno->data_de_nascimento.mes << "/" << aluno->data_de_nascimento.ano << endl;
    cout << "Data de matricula: " << aluno->data_de_matricula.dia << "/" << aluno->data_de_matricula.mes << "/" << aluno->data_de_matricula.ano << endl;
    cout << "Endereco: " << endl << aluno->endereco.cidade << "|" << aluno->endereco.estado << endl;
    cout << aluno->endereco.bairro << "|" << aluno->endereco.numero << endl;
    cout << aluno->endereco.logradouro << endl;
    cout << "Contatos: " << endl;
    for(int i=0;i<2;i++)
        cout << aluno->contato[i].ddd << " " << aluno->contato[i].numero << "  Tipo: " << aluno->contato[i].tipo << endl;
}