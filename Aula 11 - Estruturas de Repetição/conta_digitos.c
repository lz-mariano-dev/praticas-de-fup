#include <stdio.h>

int main(){
    int digito, numero, cont = 0;

    scanf("%d", &digito);
    scanf("%d", &numero);

    while(numero != 0){
        int ultimo_digito = numero % 10;

        if(ultimo_digito == digito){
            cont++;
        }
        numero = numero / 10;
    }

    printf("%d\n", cont);

    return 0;
}