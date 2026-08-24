#include <stdio.h>

int main(){
    int inicio, fim;
    scanf("%d %d\n", &inicio, &fim);
    
    for(int i = inicio; i <= fim; i++){
        if(i % 3 == 0 && i % 5 == 0){
            printf("zigzag\n");
        }else if(i % 3 == 0){
            printf("zig\n");
        }else if(i % 5 == 0){
            printf("zag\n");
        }else{
            printf("%d\n", i);
        }
    }
}