#include <stdio.h>

int main(){

    int l, c, cont = 0;
    scanf("%d %d", &l, &c);
    int m[l][c];

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(i != 0){
                if(m[i - 1][j] > m[i][j]){
                    cont++;
                } 
            }
        }
    }

    printf("%d\n", cont);



    return 0;
}