#include <stdio.h>

int main(){
    int quant, soma_par = 0, soma_impar = 0, valor;

    scanf("%d", &quant);
    for(int i = 0; i < quant; i++){
        scanf("%d", &valor);
        if(valor % 2 == 0){
            soma_par += valor;
        }else{
            soma_impar += valor;
        }
    }

    if(soma_par > soma_impar){
        printf("rebeldes");
    }else if(soma_impar == soma_par){
        printf("empate");
    }else{
        printf("soldados");
    }
    

    return 0;
}