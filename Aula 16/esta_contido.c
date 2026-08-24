#include <stdio.h>

int main(){
    int n1, n2, cont = 0;
    scanf("%d", &n1);
    int v1[n1];
    int v[n1];
    for(int i = 0; i < n1; i++) {
        v[i] = 0;
    }
    for(int i = 0; i < n1; i++){
        scanf("%d", &v1[i]);
    }
    scanf("%d", &n2);
    int v2[n2];
    for(int i = 0; i < n2; i++){
        scanf("%d", &v2[i]);
        for(int j = 0; j < n1; j++){
            if(!v[j]){
                if(v1[j] == v2[i]){
                    cont++;
                    v[j] = 1;
                }
            }
            
        }
    }

    if(cont == n1){
        printf("sim\n");
    }else{
        printf("nao\n");
    }
}