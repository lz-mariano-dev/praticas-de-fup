#include <stdio.h>

int main(){
    int modelo, teste;
    int repetidos  = 0, cont  = 0, quantidade  = 0;
    
    scanf("%d %d", &modelo, &quantidade);
    while(cont < quantidade){
        scanf(" %d", &teste);
        if(teste == modelo){
            repetidos++;
        }
        cont++;
    }
    printf("%d", repetidos);
}