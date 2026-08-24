#include <stdio.h>

typedef struct{
    int matricula;
    char nome[51];
    float media;
}Aluno;

void printf_aluno(Aluno x){
    printf("%d\n", x.matricula);
    printf("%s\n", x.nome);
    printf("%.1f\n", x.media);
}

int main(){
    int n, ind;
    float m = -1;
    scanf("%d", &n);
    Aluno a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i].matricula);
        scanf(" %[^\n]s", a[i].nome);
        scanf("%f", &a[i].media);
        if(a[i].media > m){
            m = a[i].media;
            ind = i;
        }
    }

    printf_aluno(a[ind]);
}