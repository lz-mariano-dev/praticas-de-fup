#include <stdio.h>

typedef struct{
    char nome[100];
    float n1;
    float n2;
    float n3;
    float med;
} Estudante;

int main(){
    int n;
    scanf("%d", &n);

    Estudante e[n];
    for(int i = 0; i < n; i++){
        scanf(" %[^\n]", e[i].nome);
        scanf(" %f %f %f", &e[i].n1, &e[i].n2, &e[i].n3);
        e[i].med = (e[i].n1 + e[i].n2 + e[i].n3)/3;
    }

    for(int i = 0; i < n - 1; i++){
        int maior = i;
        for(int l = i + 1; l < n; l++){
            if(e[l].med > e[maior].med){
                maior = l;
            }
        }
        if(maior != i){
            Estudante temp = e[i];
            e[i] = e[maior];
            e[maior] = temp;
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d: %s\n   Media: %.2f\n   N1: %.2f, N2: %.2f, N3: %.2f\n", i, e[i].nome, e[i].med, e[i].n1, e[i].n2, e[i].n3);
    }

    return 0;
}