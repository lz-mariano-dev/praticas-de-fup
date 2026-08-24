#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);
    float v[n], soma = 0;

    for(i = 0; i < n; i++){
        scanf("%f", &v[i]);
        soma += v[i];
    }
    printf("%.1f\n", soma/n);
    
    return 0;
}