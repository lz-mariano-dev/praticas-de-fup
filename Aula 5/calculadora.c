#include <stdio.h>

int main(){
    int a, b;
    char simb;
    scanf("%d %d", &a, &b);
    scanf(" %c", &simb);
    switch(simb){
        case '+':
            printf("%d\n", a+b);
        break;
        case '-':
            printf("%d\n", a-b);
        break;
        case '/':
            if(b != 0){
                printf("%d\n", a/b);
            }else{
                printf("invalida\n");
            }
            
        break;
        case '*':
            printf("%d\n", a*b);
        break;
        default:
            printf("invalida\n");
        break;
    }
    return 0;
}