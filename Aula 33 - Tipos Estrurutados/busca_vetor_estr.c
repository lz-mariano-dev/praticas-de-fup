#include <stdio.h>

typedef struct{
    int matricula;
    char nome[51];
    float media;
}Aluno;

void printf_aluno(Aluno x){
    printf("%s\n", x.nome);
    printf("%.1f", x.media);
}

int main(){
    int m, n;
    scanf("%d", &n);
    Aluno a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i].matricula);
        scanf(" %[^\n]s", a[i].nome);
        scanf("%f", &a[i].media);
    }
    scanf("%d", &m);

    int item = -1;
    for(int i = 0; i < n; i++){
        if(a[i].matricula == m){
            item = i;
        }
    }

    if(item > -1){
        printf_aluno(a[item]);
    }else{
        printf("NAO ENCONTRADA\n");
    }
}