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

void media(float a, float b){
    printf("Média = %.1f\n", (a + b)/2);
}

int main(){
    struct aluno aluno1;
    struct aluno aluno2;
    registrar(&aluno1);
    registrar(&aluno2);
    media(aluno1.nota, aluno2.nota);

    return 0;
}