#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a;
    
    while(a < b){
        a++;
        c = a + c;
    }
    
    if(a > b){
        printf("invalido\n");
    }else{
        printf("%d\n", c);
    }
    return 0;
}