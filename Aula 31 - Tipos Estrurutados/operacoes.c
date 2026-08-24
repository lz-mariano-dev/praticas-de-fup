#include <stdio.h>

struct expressao{
    int soma;
    int sub;
    float div;
    int mult;
};

void realizar_ex(struct expressao e, int n1, int n2){

        e.soma = n1 + n2;
        e.sub = n1 - n2;
        e.div = (float)n1 / (float)n2;
        e.mult = n1 * n2;

        printf("%d %d %.1f %d\n", e.soma, e.sub, e.div, e.mult);
    
}

int main(){
    int n1, n2;
    struct expressao ex;
    scanf("%d %d", &n1, &n2);
    realizar_ex(ex, n1, n2);
    return 0;
}