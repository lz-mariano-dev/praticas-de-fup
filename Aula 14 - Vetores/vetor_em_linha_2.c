#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);

    int v[n];

    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    printf("[ ");
    for(i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("]");
    return 0;
}