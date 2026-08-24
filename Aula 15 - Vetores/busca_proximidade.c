#include <stdio.h>

int main(){
    int n, cont = 0, esq = 0, dir = 0;
    scanf("%d", &n);
    int l[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &l[i]);
    }
    for(int i = 0; i < n ; i++){
        if(l[i] == 0){
            if(i > 0){
                esq = l[i - 1];
            }
            if(i < n -1){
                dir = l[i + 1];
            }
            if ((esq != 1 && dir != 1)){
                cont++;
            }
        }
    }
    printf("%d\n", cont);
}