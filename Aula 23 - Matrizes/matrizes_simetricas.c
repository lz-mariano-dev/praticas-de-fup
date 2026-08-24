#include <stdio.h>

int main(){
    int matriz[3][3];
    int oks = 1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] != matriz[j][i]){ oks = 0; break;}
        }
    }

    if(oks){
        printf("sim\n");
    }else{
        printf("nao\n");
    }
}