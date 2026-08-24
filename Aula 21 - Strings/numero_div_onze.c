#include <stdio.h>

int main(){
    char numero[21];
    int soma = 0;
    scanf("%[^\n]s", numero);
    for(int i= 0; numero[i] != '\0'; i++){
        if(i % 2 == 0){
            soma += numero[i] - '0';
        }else{
            soma -= numero[i] - '0';
        }
    }
    if(soma == 0 || soma % 11 == 0){
        printf("sim\n");
    }else{
        printf("nao\n");
    }
}