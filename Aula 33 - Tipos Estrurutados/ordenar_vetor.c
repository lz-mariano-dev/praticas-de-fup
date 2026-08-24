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
    int n;
    scanf("%d", &n);
    Aluno a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i].matricula);
        scanf(" %[^\n]s", a[i].nome);
        scanf("%f", &a[i].media);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j].media > a[j + 1].media) {
                Aluno temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf_aluno(a[i]);
    }

}