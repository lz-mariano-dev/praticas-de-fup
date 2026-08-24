#include <stdio.h>

struct aluno{
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float media;
};

struct aluno registrar(){
    struct aluno a;
    scanf(" %[^\n]s", a.nome);
    scanf(" %f", &a.nota1);
    scanf(" %f", &a.nota2);
    scanf(" %f", &a.nota3);
    a.media = 0;
    return a;
};

float media(struct aluno a){
    return ((a.nota1 + a.nota2 + a.nota3)/3);
}

int main(){
    struct aluno alunos[3];
    for(int i = 0; i < 3; i++){
        alunos[i] = registrar();
        alunos[i].media = media(alunos[i]);
        if(alunos[i].media >= 7){
            printf("%s %.2f\n", alunos[i].nome, alunos[i].media);
        }
    }

    return 0;
}