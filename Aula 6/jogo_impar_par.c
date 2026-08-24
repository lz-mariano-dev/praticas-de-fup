#include <stdio.h>

int main(){
    int mao1, mao2, result;
    char escolha;
    scanf(" %c", escolha);
    scanf("%d %d", mao1, mao2);
    result = mao1, mao2;
    if(escolha == 'i' && ((result % 2) == 1)){
        printf("Venceu");
    }else if(escolha == 'p' && ((result % 2) == 0)){
        printf("Venceu");
    }else{
        printf("Perdeu");
    }
    return 0;
}