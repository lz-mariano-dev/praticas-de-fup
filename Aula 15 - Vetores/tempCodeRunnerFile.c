#include <stdio.h>

int main(){
    int n, cont = 0;
    scanf("%d", &n);
    int l[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &l[i]);
    }
    for(int i = 0; i < n; i++){
        if(l[i] == 0){
            if (!(l[i - 1] == 1 || l[i + 1] == 1)){
                cont++;
            }
        }
    }
    printf("%d\n", cont);
}