#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int f[n];
    printf("[ ");
    for(int i = 0; i < n; i++){
        scanf("%d", &f[i]);
        if(f[i] % 2 == 1){
            printf("%d ", f[i]);
        }
    }
    printf("]\n");
    printf("[ ");
    for(int i = 0; i < n; i++){
        if(f[i] % 2 == 0){
            printf("%d ", f[i]);
        }
    }
    
    printf("]\n");
}