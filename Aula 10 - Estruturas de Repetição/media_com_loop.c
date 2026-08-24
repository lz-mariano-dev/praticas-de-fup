#include <stdio.h>

int main(){
    int quant;
    float nota, soma_notas = 0, nota_final;

    scanf("%d", &quant);
    for(int i = 0; i < quant; i++){
        scanf("%f", &nota);
        soma_notas += nota;
    }
    nota_final = soma_notas / quant;
    printf("%.1f\n", nota_final);

    return 0;
}