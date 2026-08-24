#include <stdio.h>

int main(){
    int q1, q2, q3;
    float v1, v2, v3, valor_total, dinheiro, troco;
    scanf("%d %d %d", &q1, &q2, &q3);
    scanf("%f %f %f", &v1, &v2, &v3);
    scanf("%f", dinheiro);
    valor_total = (q1*v1) + (q2*v2) + (q3*v3);
    troco = valor_total - dinheiro;
    printf("%.2f", troco);

    
    return 0;
}