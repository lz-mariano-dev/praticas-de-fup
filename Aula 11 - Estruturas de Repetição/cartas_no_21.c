#include <stdio.h>

int main(){
    int quant, num = 0, soma = 0, cont = 0;
    scanf("%d", &quant);
    for(int i = 0; i < quant; i++){
        scanf("%d", &num);
        switch(num){
                case 1:
                    cont++;
                    soma+= 11;
                    if(soma > 21){
                      soma-= 10 * cont;
                    }
                 break;
                case 11:
                case 12:
                case 13:
                    soma += 10;
                break;
                default:
                    soma += num;
                break;
            }
    }
    printf("%d\n", soma);
}