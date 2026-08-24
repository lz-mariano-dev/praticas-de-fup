#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);

    int v[n];

    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    for(i = 0; i < n; i++){
        printf("%d\n", v[i]);
    }
    return 0;
}