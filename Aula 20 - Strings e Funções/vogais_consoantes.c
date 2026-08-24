#include <stdio.h>

char verificar_vogais(char let);
int main(){
    char frase[51];
    int i = 0;
    scanf("%[^\n]s", frase);
   
    while(frase[i] != '\0'){
        frase[i] = verificar_vogais(frase[i]);
        i++;
    }

    printf("%s\n", frase);
}

char verificar_vogais(char let){
    if(let > 90){
        let -= 32;
    }
    switch(let){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return 'v';
        break;
        case ' ':
            return ' ';
        break;
        default:
            return 'c';
        break;
    }
}