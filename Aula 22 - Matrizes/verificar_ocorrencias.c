#include <stdio.h>

int verif_ocorr(int x);

int main(){
    int v[6];
    int ans = 0;
    for(int i = 0; i < 6; i++){
        scanf("%d", &v[i]);
        if(verif_ocorr(v[i])){
            ans++;
        }
    }
    printf("%d\n", ans);
}

int verif_ocorr(int x){
    int matriz[4][4] = 
    { 1, 9, 27, 23, 
      34, 20, 37, 47, 
      30, 87, 55, 69, 
      13, 60, 99, 66
    };

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(x == matriz[i][j]){
                return 1;
            }
        }
    }

    return 0;
}