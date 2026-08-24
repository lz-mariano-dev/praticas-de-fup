#include <stdio.h>

int main(){
    int n;
    int g =0, c =0;
    
    scanf("%d", &n);
    char matriz[n][n];

    int iL, jL;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf(" %c", &matriz[i][j]);
            if(matriz[i][j] == 'L'){iL = i; jL = j;}
            
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != iL && j != jL){
                if(matriz[i][j] == 'C'){
                    if(j == (n - 1) - i){
                        c += 2;
                    }else{
                        c++;
                    }
                }else if(matriz[i][j] == 'G'){
                    g += 2;
                }
            }
        }
    }

    if(g == c){
        printf("Ninguem\n");
    }else if(g > c){
        printf("Gladiadores\n");
    }else{
        printf("Condenados a morte\n");
    }


}