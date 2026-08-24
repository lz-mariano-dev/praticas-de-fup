#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if((a == b) && (c == a)){
        printf("3\n");
    } else if((a == b) || (a == c) || (c == b)) {
        printf("2\n");
    } else {
        printf("0\n");
    }

    return 0;
}