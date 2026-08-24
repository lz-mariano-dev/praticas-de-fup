#include <stdio.h>

int main(){
    int q1, q2, q3;
    float v1, v2, v3, din, troco = 0;
    scanf("%d %d %d", &q1, &q2, &q3);
    scanf("%f %f %f", &v1, &v2, &v3);
    scanf("%f", &din);
    troco = din - ((q1 * v1) + (q2 * v2) + (q3 * v3));
    printf("%.2f", troco);
}
