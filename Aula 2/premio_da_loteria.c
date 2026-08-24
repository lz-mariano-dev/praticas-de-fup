#include <stdio.h>

int main(){
    float a1, a2, a3, premio, soma_aposta;
    scanf("%f %f %f %f", &a1, &a2, &a3, &premio);
    soma_aposta = a1 + a2 + a3;
    printf("%f\n", (premio * (a1/soma_aposta)));
    printf("%f\n", (premio * (a2/soma_aposta)));
    printf("%f", (premio * (a3/soma_aposta)));
    
    return 0;
}