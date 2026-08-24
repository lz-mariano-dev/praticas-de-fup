#include <stdio.h>

int main(){
    int p, s, e, posicao = 0;
    scanf("%d", &p);
    scanf("%d", &s);
    scanf("%d", &e);
    while(posicao < p){
        printf("%d ", posicao);
        if((posicao + s) >= p){
            printf("saiu\n");
            break;
        }
        posicao += s;
        printf("%d\n", posicao);
        posicao -= e;
        
    }
}