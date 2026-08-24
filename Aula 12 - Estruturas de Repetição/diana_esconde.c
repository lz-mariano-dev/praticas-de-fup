#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }
    for(int i = n; i >= 0; i--){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}