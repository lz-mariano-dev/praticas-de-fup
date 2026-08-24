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

void imprimir(struct aluno a){
    printf("Nome = %s\n", a.nome);
    printf("Matrícula = %s\n", a.matricula);
    printf("Disciplina = %s\n", a.disciplina);
    printf("Nota = %.1f\n", a.nota);
}

int main(){
    struct aluno aluno;
    registrar(&aluno);
    imprimir(aluno);

    return 0;
}