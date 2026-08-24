#include <stdio.h>

int main(){
    int total_seg, horas, minutos, segundos, resto;
    scanf("%d", &total_seg);
    horas = total_seg/3600;
    resto = total_seg % 3600;
    minutos= resto/60;
    segundos = resto % 60;
    printf("%d:%d:%d", horas, minutos, segundos);

    return 0;
}