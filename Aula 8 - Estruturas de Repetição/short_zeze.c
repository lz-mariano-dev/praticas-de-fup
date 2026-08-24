#include <stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    for(int i = 1; i < 5; i++){
        scanf("%d", &b);
        if(a >= b){
            a = b;
        }
    
    }
    printf("%d\n", a);
    return 0;
}