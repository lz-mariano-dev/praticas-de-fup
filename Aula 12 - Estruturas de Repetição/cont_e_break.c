#include <stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("[ ");
    while(a <= b){

        if(a % 2 != 0){
            printf("%d ", a);
        }
        a++;
        if(a == b){
            printf("]");
            break;
        }else{
            continue;
        }
    }

    return 0;
}