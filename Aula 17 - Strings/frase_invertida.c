#include <stdio.h>

int main(){
    int i = 0;
    char frase[101];
    scanf("%[^\n]s", frase);
    while(frase[i] != '\0'){
        i++;
    }
    for(i; i >= 0; i--){
        if(frase[i] != '\0'){ printf("%c", frase[i]);}
    }
    printf("\n");

     
}