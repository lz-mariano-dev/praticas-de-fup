#include <stdio.h>

int main(){
    int a, maior = 0;
    for(int i = 0; i < 4; i++){
        scanf("%d", &a);
        if(a > maior || a == maior){
            maior = a;
        }
    }
    printf("%d\n", maior);
    return 0;
}
