#include <stdio.h>

int main(){
    int n, q;
    scanf("%d", &n);
    scanf("%d", &q);
    for(int i = 0; i < q; i++){
        printf("%d\n", n);
        n += 2;
    }
}