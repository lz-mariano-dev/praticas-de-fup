#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a == 0){
        printf("nulo");
    }else{
        if(a > 0){
            printf("positivo");
        }else{
            printf("negativo");
        }
    } 
    return 0;
}