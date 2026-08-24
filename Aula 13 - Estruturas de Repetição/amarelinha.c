#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("[");
    for(int i = 0; i <= 10; i++){
        if(i == 10 && n != 10){
            printf(" ceu");
            break;
        }
        if(!(i == n)){
            printf(" %d", i);
        }
       
    }
    printf(" ]\n");
}