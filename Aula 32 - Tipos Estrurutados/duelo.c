#include <stdio.h>

typedef struct{
    int vida;
    int ataque;
}Personagem;

int main(){
    Personagem one, two;   
    scanf("%d %d", &one.vida, &one.ataque);
    scanf("%d %d", &two.vida, &two.ataque);
    while(one.vida > 0 || two.vida > 0){
        one.vida -= two.ataque;
        two.vida -= one.ataque;
    }

    if(one.vida > two.vida){
        printf("Personagem 1\n");
    }else if(one.vida < two.vida){
        printf("Personagem 2\n");
    }else{
        printf("Empate\n");
    }
}