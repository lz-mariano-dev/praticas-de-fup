#include <stdio.h>

int main(){
    int a, b, c = 0;
    scanf("%d %d", &a, &b);

    if(a > b){
        printf("invalido\n");
        return 0;
    }else if(a == b){
        printf("%d\n", a);
        return 0;
    }
    while(a <= b){
        if(a % 2 == 0){
            c += a;
        }
        a++;
    }

    printf("%d\n", c);

    return 0;
}