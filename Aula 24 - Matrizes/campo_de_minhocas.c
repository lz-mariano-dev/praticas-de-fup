#include <stdio.h>
//prefixan
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int mat[n][m];
    int vi[n];
    int vj[m];
    int maior = -1;
    for(int i = 0; i < n; i++){
        vi[i] = 0;
    }
    for(int j = 0; j < m; j++){
        vj[j] = 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int value;
            scanf("%d", &value);
            mat[i][j] = value;
            vi[i] += value;
            vj[j] += value;
        }
    }

    for(int i = 0; i < n; i++){
        if(vi[i] > maior){
            maior = vi[i];
        }
    }

    for(int j = 0; j < n; j++){
        if(vj[j] > maior){
            maior = vj[j];
        }
    }

    printf("%d\n", maior);
    
}