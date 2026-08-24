#include <stdio.h>

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%d\n", (n1/n2));
    printf("%d\n", (n1%n2));
    float div_quebrada = (float)n1 / n2;
    printf("%.2f\n", (div_quebrada));

}