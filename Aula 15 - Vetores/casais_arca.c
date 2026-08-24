#include <stdio.h>

int main(){
    int n, cont = 0;
    scanf("%d", &n);
    int v[n];
    int marcados[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
        marcados[i] = 0;
    }
    for(int i = 0; i < n; i++){
        if(marcados[i]){
            continue;
        }
        for(int j = i + 1; j < n; j++){
            if(!marcados[j] && v[i] == v[j]*(-1)){
                cont++;
                marcados[j] = v[j];
                marcados[i] = v[i];
                break;
            }
        }
       
    }
    printf("%d\n", cont);
}