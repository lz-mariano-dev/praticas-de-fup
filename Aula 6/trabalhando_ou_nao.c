
#include <stdio.h>

int main (){
    int dia, hora, min;
    scanf("%d %d %d", &dia, &hora, &min);
    if((dia == 7) && (hora >= 8 && hora <= 11) && (min >= 0 && min <= 59)){
        printf("SIM");
    } else if((dia != 1 && dia != 7) && ((hora >= 8 && hora <= 11) || (hora >= 14 && hora <= 17) ) && (min >= 0 && min <= 59)){
        printf("SIM");
    }else{
        printf("NAO");
    }
    return 0;
}