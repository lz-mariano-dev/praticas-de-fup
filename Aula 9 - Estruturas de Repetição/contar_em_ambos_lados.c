#include <stdio.h>

int main(){
    int a, b = 0;
    
    scanf("%d %d", &a, &b);
    printf("[");
    while(a < b || a > b){
        printf(" %d", a);
        if(a > b){
            a--;
        }else if(a < b){
            a++;
        }
    }
    printf(" ]");
    
    return 0;
}