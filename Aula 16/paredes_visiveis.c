#include <stdio.h>

int main(){
    int n, esq = 0, cont = 0;
    scanf("%d", &n);
    int v[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
        if(i > 0){
            esq = v[i-1];
        }
        if(esq < v[i]){
            cont++;
        }
    }
    printf("%d\n", cont);
}