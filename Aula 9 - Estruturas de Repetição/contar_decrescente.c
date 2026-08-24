#include <stdio.h>

int main(){
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("[ ");
    while(a > b){
        printf("%d ", a);
        a--;
    }
    printf("]");
    return 0;
}