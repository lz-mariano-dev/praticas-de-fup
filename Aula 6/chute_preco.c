#include <stdio.h>

int main(){
    float chute, valor_real;
    char maior_ou_menor; // m -> menor e M -> maior

    scanf("%f\n", &chute);
    scanf(" %c\n", &maior_ou_menor);
    scanf("%f\n", &valor_real);
    if((maior_ou_menor == 'm' && chute < valor_real) || (maior_ou_menor == 'M' && chute > valor_real)){
        printf("segundo");
    }else{
        printf("primeiro");
    }
    return 0;
}