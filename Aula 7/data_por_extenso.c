#include <stdio.h>

int main(){
    int dia, mes, ano;

    scanf("%d/%d/%d", dia, mes, ano);
    switch(mes){
        case 1:
            printf("%02d de janeiro de %d", dia, ano);
        break;
        case 2:
            printf("%02d de fevereiro de %d", dia, ano);
        break;
        case 3:
            printf("%02d de março de %d", dia, ano);
        break;
        case 4:
            printf("%02d de abril de %d", dia, ano);
        break;
        case 5:
            printf("%02d de maio de %d", dia, ano);
        break;
        case 6:
            printf("%02d de junho de %d", dia, ano);
        break;
        case 7:
            printf("%02d de julho de %d", dia, ano);
        break;
        case 8:
            printf("%02d de agosto de %d", dia, ano);
        break;
        case 9:
            printf("%02d de setembro de %d", dia, ano);
        break;
        case 10:
            printf("%02d de outubro de %d", dia, ano);
        break;
        case 11:
            printf("%02d de novembro de %d", dia, ano);
        break;
        case 12:
            printf("%02d de dezembro de %d", dia, ano);
        break;

    }
    
    


    return 0;
}