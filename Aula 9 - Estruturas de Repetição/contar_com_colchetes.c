#include <stdio.h>

int main(){
    int a, b = 0;
    scanf("%d %d", &a, &b);
    for(int i = a; i < b; i++){
        if(i == a){
            printf("[ ");
        }
        printf("%d ", i);
        if(i == b - 1){
            printf("]\n");
        }
    }
    return 0;
}