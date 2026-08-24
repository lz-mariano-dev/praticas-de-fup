#include <stdio.h>

int main(){
    int a, b = 0;
    scanf("%d %d", &a, &b);
    for(int i = a; i < b; i++){
        printf("%d\n", i);
    }
    return 0;
}