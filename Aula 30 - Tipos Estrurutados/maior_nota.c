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

void verf_maior(struct aluno a, struct aluno b){
    if(a.nota == b.nota){
        printf("%s e %s, %.1f\n", a.nome, b.nome, a.nota);
    }
    else if(a.nota > b.nota){
        printf("%s, %.1f\n", a.nome, a.nota);
    }else{
        printf("%s, %.1f\n", b.nome, b.nota);
    }
}

int main(){
    struct aluno aluno1;
    struct aluno aluno2;
    registrar(&aluno1);
    registrar(&aluno2);
    verf_maior(aluno1, aluno2);

    return 0;
}