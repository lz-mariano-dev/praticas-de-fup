#include <stdio.h>

int main(){
    int soma = 0;
    char nome[101]; 
    scanf("%[^\n]s", nome);
    for(int i = 0; i < 100; i++){
        if(nome[i] == '\0'){
            break;
        }else{
            soma += nome[i];
        }
    }
    printf("%d\n", soma % 50);

}