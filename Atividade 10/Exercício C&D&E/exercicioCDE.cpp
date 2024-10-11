#include <iostream>
using namespace std;

typedef struct{
    string nome;
    int serie;
    float nota;
}Aluno;

void Notas(float *no, int tam);
void Media(float *no, int tam);
void CriaAluno(Aluno *al, float *no, int tam);
void Imprimir(Aluno *al, float *no, int tam);

int main(){
    int turma;
    cout << "Quantos alunos tem na turma?" << endl;
    cin>> turma;
    float *notas;
    Aluno *alunos;
    if(!(notas = new(nothrow) float[turma])){
        cout << "Falha na alocacao de memoria" << endl;
        return -1; 
    }
     if(!(alunos = new(nothrow) Aluno[turma])){
        cout << "Falha na alocacao de memoria" << endl;
        return -1; 
    }
    Notas(notas, turma);
    CriaAluno(alunos, notas, turma);
    Imprimir(alunos, notas, turma);
    Media(notas, turma);
    delete[] notas;
    notas = NULL;
    delete[] alunos;
    alunos = NULL;
    return 0;
}

void CriaAluno(Aluno *al, float *no, int tam){
    int i=0;
    while(i<tam){
        cout << "Nome do aluno " << i+1 << ": ";
        cin >> (al+i)->nome;
        cout << endl;
        cout << "Serie do aluno " << i+1 << ": ";
        cin >> (al+i)->serie;
        cout << endl;
        (al+i)->nota = *(no+i);
        i++;
    }
}

void Imprimir(Aluno *al, float *no, int tam){
   int i=0;
    while(i<tam){
        cout << "Nome do aluno " << i+1 << ": ";
        cout << (al+i)->nome << endl;
        cout << "Serie do aluno " << i+1 << ": ";
        cout << (al+i)->serie << endl;
        cout << "Nota do aluno " << i+1 << ": ";
        cout << (al+i)->nota << endl;
        i++;
    } 
}

void Notas(float *no, int tam){
    int i=0;
    while(i<tam){
        cout << "Nota do aluno " << i+1 << ": ";
        cin >> *(no+i);
        cout << endl;
        i++;
    }
}
void Media(float *no, int tam){
    int i=0;
    float media=0;
    while(i<tam){
        media += *(no+i);
        i++;
    }
    media = media/tam;
    cout << "Media das notas: " << media << endl;
}