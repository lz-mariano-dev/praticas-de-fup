#include <stdio.h>

int main(){
    int p, a, temp = 0, cont = 0, f = 0;
    scanf("%d %d", &a ,&p);
    int fig[p], rep[p], alb[p];

    for(int i = 0; i < a; i++){
        alb[i] = i + 1;
    }

    for(int i = 0; i < p; i++){
        scanf("%d", &fig[i]);
        if(temp == fig[i]){
            rep[cont] = fig[i];
            fig[i] = 0;
            cont++;
            continue;
        }else{
            temp = fig[i];
        }    
    }

    printf("[ ");
    for(int i = 0; i < cont; i++){
        printf("%d ", rep[i]);
    }
    printf("]\n");
    printf("[ ");
     for(int i = 0; i < a; i++){
        int f = 0;
        for(int j = 0; j < p; j++){
            if(fig[j] == alb[i]){
                f = 1;
                break; 
            }
        }
        if(!f){
            printf("%d ", alb[i]);
        }
            
    }
    printf("]\n");
}