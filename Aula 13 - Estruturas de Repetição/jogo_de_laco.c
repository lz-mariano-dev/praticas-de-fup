#include <stdio.h>

int main(){
    int a, b, c = 0;
    scanf("%d %d", &a , &b);
    printf("[");
    while(a <= b){
        printf(" %d %d", a, b - c);
        c++;
        a++;
    }
    printf(" ]\n");

}