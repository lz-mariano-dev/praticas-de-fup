#include <stdio.h>

typedef struct{
    float nota;
    int peso;
} Prova;

int main(){
    int n;
    float soma = 0, soma_p = 0;
    scanf("%d", &n);
    Prova provas[n];
    for(int i = 0; i < n; i++){
        scanf("%f", &provas[i].nota);
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &provas[i].peso);
    }

    for(int i = 0; i < n; i++){
        soma += provas[i].nota * provas[i].peso;
        soma_p += provas[i].peso;
    }

    printf("%.2f\n", soma/soma_p );
}