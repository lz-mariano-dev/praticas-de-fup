#include <stdio.h>

int main(){

    int cois, quant_short, short_teste;
    int cont = 1; 
    int quant_final = 0;
    scanf("%d %d", &cois, &quant_short);
    while(cont <= quant_short){
        scanf(" %d", &short_teste);
        if(short_teste > cois){
            quant_final++;
        }
        cont++;
    }
    printf("%d\n", quant_final);
    return 0;
}