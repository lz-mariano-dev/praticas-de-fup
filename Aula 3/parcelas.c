#include <stdio.h>

int main(){
    float preco, juros, valor_final, valor_parcela;
    int parcelas;
    scanf("%f %d", &preco, &parcelas);

    //formula juros:  juros = (numero de parcelas - 1) * 5;
    juros = (parcelas - 1) * 5;

    valor_final = preco + ((preco/100) * juros);
    valor_parcela = valor_final/parcelas;

    printf("%.2f\n%.2f\n", valor_parcela, valor_final);

    return 0;
}