#include <stdio.h>

struct aluno{
    char nome[50];
    char matricula[20];
    char disciplina[50];
    float nota;
};

struct aluno registrar(struct aluno *a){
    scanf(" %[^\n]s", a->nome);
    scanf(" %[^\n]s", a->matricula);
    scanf(" %[^\n]s", a->disciplina);
    scanf(" %f", &a->nota);
    return *a;
};

void verf_aprovado(struct aluno a){
    if(a.nota >= 7){
        printf("%s aprovado(a) em %s\n", a.nome, a.disciplina);
    }else{
        printf("%s reprovado(a) em %s\n", a.nome, a.disciplina);
    }
}

int main(){
    struct aluno aluno;
    registrar(&aluno);
    verf_aprovado(aluno);

    return 0;
}