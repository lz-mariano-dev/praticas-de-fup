#include <stdio.h>

int main (){
    char item;
    int cont = 0;
    scanf(" %c", &item);
    if(item == 'd'){cont++;}
    scanf(" %c", &item);
    if(item == 'a'){cont++;}
    scanf(" %c", &item);
    if(item == 'c'){cont++;}
    scanf(" %c", &item);
    if(item == 'd'){cont++;}
    switch(cont){
        case 0:
            printf("Nunca assistiu\n");
        break;
        case 1:
            printf("Ja ouviu falar\n");
        break;
        case 2:
            printf("Interessado no assunto\n");
        break;
        case 3:
            printf("Fa\n");
        break;
        case 4:
            printf("Super Fa\n");
        break;
    }

}