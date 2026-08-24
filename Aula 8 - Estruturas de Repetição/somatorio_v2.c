#include <stdio.h>

int main(){
    int a, b, c = 0;
    scanf("%d %d", &a, &b);

    if(a > b){
        printf("invalido\n");
        return 0;
    }

    while(a <= b){
        if((a % 2 == 0) && (a % 3 == 0)){
            c += a;
        }
        a++;
    }

    printf("%d\n", c);

    return 0;
}