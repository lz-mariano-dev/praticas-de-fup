#include <stdio.h>

int main(){
    int c, l;
    scanf("%d %d", &l, &c);
    int a[l][c];
    int b[l][c];

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < l; i++){
        printf("[ ");
        for(int j = 0; j < c; j++){
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("]\n");
    }
}