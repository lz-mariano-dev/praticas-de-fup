#include <stdio.h>
//prefixan
int main(){
    int n;
    scanf("%d", &n);
    int mat[n][n];
    int vi[n];
    int vj[n];
    int maior = -1;
    for(int i = 0; i < n; i++){
        vi[i] = 0;
        vj[i] = 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int value;
            scanf("%d", &value);
            mat[i][j] = value;
            vi[i] += value;
            vj[j] += value;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int temp = (vi[i] + vj[j]);
            temp -= (mat[i][j]) * 2;

            if(temp >= maior){
                maior = temp;
            }
        }
    }
    printf("%d\n", maior);
    
}