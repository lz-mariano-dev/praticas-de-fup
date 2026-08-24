#include <stdio.h>

int main(){
    int a, b, p = 0;
    scanf("%d %d", &a, &b);
    if(a <= b){
        while(a <= b){
            if(a % 2 == 0 && a % 3 == 0){
                p++;
            }
            a++;
        }
        printf("%d", p);
    }else{
        printf("invalido\n");
    }
}