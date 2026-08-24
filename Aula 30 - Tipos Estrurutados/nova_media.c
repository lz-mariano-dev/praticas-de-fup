#include <stdio.h>

struct aluno{
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

struct aluno registrar(struct aluno *a){
    scanf(" %[^\n]s", a->nome);
    scanf(" %f", &a->nota1);
    scanf(" %f", &a->nota2);
    scanf(" %f", &a->nota3);
    return *a;
};

void media(struct aluno a){
    printf("%.1f\n", (a.nota1 + a.nota2 + a.nota3)/3);
}

int main(){
    struct aluno aluno;
    registrar(&aluno);
    media(aluno);

    return 0;
}