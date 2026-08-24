#include <stdio.h>

int main(){
    int matriz[5][5];
    int soma_d1 = 0, soma_d2 = 0;

    for(int i = 0; i< 5; i++){
        for(int j =0; j<5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i< 5; i++){
        for(int j =0; j<5; j++){
            if(i == j){
                soma_d1 += matriz[i][j];
            }
            if(j == (5 - 1) - i){
                soma_d2 += matriz[i][j];
            }
        }
    }

    printf("%d\n", soma_d1 - soma_d2);
}